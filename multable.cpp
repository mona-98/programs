#include<stdio.h>

int main() {
	int i,j;
	int start_number,end_number;
	scanf("%d%d",&start_number,&end_number);
	for(i=start_number;i<=end_number;i++) {
		for(j=start_number;j<=end_number;j++) {
			printf("%d * %d = %d\t",i,j,i*j);
	    }
	    printf("\n");
	}
	printf("this is for while loop");
	printf("\n");
	i=start_number;
	while(i<=end_number) {
		j=start_number;
		while(j<=end_number) {
			printf("%d * %d = %d\t",i,j,i*j);
			j++;
		}
		printf("\n");
		i++;
	}
	
	printf("this is for do while loop");
	printf("\n");
	i=start_number;
	do {
		j=start_number;
		do {
			printf("%d * %d = %d\t",i,j,i*j);
			j++;	
		}while(j<=end_number);
	i++;
	printf("\n");	
	}while(i<=end_number);

}
