#include<stdio.h>
int main() {
	int testData;
	scanf("%d",&testData);
	int i;
	for(i=1;i<=testData;i++) {
		printf("%d",i);
	}
	printf("\n");
	i=1;
	while(i<=testData) {
		printf("%d",i);
		i++;
	}
	printf("\n");
	i=1;
	do {
		printf("%d",i);
		i++;
	}while(i<=testData);
}
