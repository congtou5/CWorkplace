#include <stdio.h>

int maxSubseqSum(int A[],int N);
int begin;
int end;

int main()
{
	int size;
	scanf("%d",&size);
	int sequence[size];
	int i;
	for(i=0; i<size; i++) {
		scanf("%d",&sequence[i]);
	}
	int maxSum;
	maxSum=maxSubseqSum(sequence,size);
	if(maxSum==0) {
		for(i=0; i<size; i++) {
			if(sequence[i]==0) {
				break;
			}
		}
		//数列都为负数 
		if(i==size) {
			printf("%d %d %d",maxSum,sequence[0],sequence[size-1]);
		} else {
			printf("%d %d %d",maxSum,0,0);
		}
	} else {
		printf("%d %d %d",maxSum,sequence[begin],sequence[end]);
	}
	return 0;
}

int maxSubseqSum(int A[],int N)
{
	int thisSum=0;
	int maxSum=0;
	int index=0;
	int i;
	for(i=0; i<N; i++) {
		thisSum+=A[i];
		if(thisSum>maxSum) {
			maxSum=thisSum;
			begin=index;
			end=i;
		} else if(thisSum<0) {
			thisSum=0;
			index=i+1;
		}
	}
	return maxSum;
}
