#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int count =0;
	int sum=0;
	for(int i=2;count<=n;i=i+2) {
		count++;
		sum=sum+i;
		printf("%d\t",i);
	}
	printf("%d\n",sum);
	count=0;
	sum=0;
	int i=2;
	while(count<=n) {
		count++;
		sum=sum+i;
		printf("%d\t",i);
		i=i+2;
	}
	printf("%d\n",sum);
	count=0;
	sum=0;
	 i=2;
	do {
		count++;
		sum=sum+i;
		printf("%d\t",i);
		i=i+2;
	}while(count<=n);
	printf("%d\n",sum);
}
