#include <stdio.h>

int isWanShu(int num);

int main(){
	int n, m, j;
	int cnt=0;
	
	scanf("%d %d",&n,&m);
//	n=2,m=5;
	for(j=n;j<=m;j++){
		int wanshu=isWanShu(j);
		if(wanshu){
			if(cnt>0){
				printf(" ");
			}
			printf("%d",j);
			cnt++;
		}	
	}			
	//如果没有，则输出一个空行
	if(cnt==0){
		printf(" ");
	}	
}

int isWanShu(int num)
{
	int i;
	int sum=0,wanshu=0;
	for(i=1;i<num;i++){
		if(num%i==0){
			sum+=i;
		}
	}
	if(sum==num){
		wanshu=1;
	}
	return wanshu;
 } 
