#include<stdio.h>
int main() {
	int i;
	int sum=0;
	for(i=1;i<=10;i++) {
		sum=sum+i;
	}
	printf("%d",sum);
	printf("\n");
	i=1;
	sum=0;
	while(i<=10) {
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
	printf("\n");
	i=1;
	sum=0;
	do{
		sum=sum+i;
		i++;
	}while(i<=10);
	printf("%d",sum);
	
}
