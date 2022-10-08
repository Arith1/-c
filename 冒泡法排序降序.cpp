#include<stdio.h>
int main(){
	int n;
	printf("输入元素个数（2<N<100）=");
	scanf("%d",&n);
	int score[100];
	for(int i=1;i<=n;i++){
		scanf("%d",&score[i]);
	}
	int t;
	for(int i=n;i>1;i--){
		for(int j=1;j<=i;j++)
		if(score[j]<score[j+1]){
		t=score[j];
		score[j]=score[j+1];
		score[j+1]=t;	
		}
	}
	for(int i=1;i<=n;i++){
		printf("%d  ",score[i]);
	}
	return 0;
}
