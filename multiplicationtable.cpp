#include<stdio.h>
int main() {
	int number;
	int i;
	scanf("%d",&number);
	for(i=1;i<=10;i++) {
		printf("%d * %d = %d",number,i,number*i);
		printf("\n");
	}
	i=1;
	while(i<=10) {
		printf("%d * %d = %d",number,i,number*i);
		printf("\n");
		i++;
	}
	i=1;
	do {
		printf("%d * %d = %d",number,i,number*i);
		printf("\n");
		i++;
	}while(i<=10);
}

