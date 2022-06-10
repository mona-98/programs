#include<stdio.h>
int isOdd(int number);
int main() {
	int number;
	int count =0;
	int sum=0;
	int i=0;
	scanf("%d",&number);
	for( i=1;count<number;i=i+2) {
			count = count+1;
			sum = sum+i;
			printf("%d\t",i);
	}
	printf("\n");
	printf("%d",sum);
	count=0;
	sum=0;
	i=1;
	while(count<number) {
			count=count+1;
			sum = sum+i;
			printf("%d\t",i);
			i=i+2;
	}
	printf("\n");
	printf("%d",sum);
	count=0;
	sum=0;
	i=1;
	do {
			count=count+1;
			sum = sum+i;
			printf("%d\t",i);
			i=i+2;	
	}while(count<number);
}

int isOdd(int number) {
	if(number%2!=0) {
		return 1;
	}
	return 0;
}
