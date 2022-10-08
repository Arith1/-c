#include<stdio.h>
int main(){
	int n;
	printf("输入元素个数（2<N<100）");
	scanf("%d",&n);
	int score[100];
	for(int i=1;i<=n;i++){
		scanf("%d",&score[i]);
	}
	int t;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(score[i]<score[j]){
				t=score[i];
				score[i]=score[j];
				score[j]=t;
			}
		}
	}
	for(int i=1;i<=n;i++){
		printf("%d  ",score[i]);
	}
	return 0;
}
