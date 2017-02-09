#include <stdio.h>

int maxSubseqSum(int A[],int N);

int main()
{
	int size;
	scanf("%d",&size);
	int sequence[size];
	int i;
	for(i=0; i<size; i++) {
		scanf("%d",&sequence[i]);
	}
	printf("%d %d %d",maxSubseqSum(sequence,size));
	return 0;
}

int maxSubseqSum(int A[],int N)//¸´ÔÓ¶ÈO(n) 
{
	int thisSum=0;
	int maxSum=0;
	int i;
	for(i=0; i<N; i++) {
		thisSum+=A[i];
		if(thisSum>maxSum) {
			maxSum=thisSum;
		} else if(thisSum<0) {
			thisSum=0;
		}
	}
	return maxSum;

}
