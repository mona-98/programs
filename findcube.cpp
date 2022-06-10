#include<stdio.h>

int main() {
	int number;
	int i,j;
	int cube=1;
	scanf("%d",&number);
	for(i=1;i<=number;i++) {
		cube=1;
		for(j=1;j<=3;j++) {
			cube=cube*i;
		}
		printf("%d cube is :%d",i,cube);
		printf("\n");
	}
	printf("This is for while loop");
	i=1;
	j=1;
	while(i<=number) {
		cube=1;
		j=1;
		while(j<=3) {
			cube=cube*i;
			j++;
		}
		printf("%d cube is :%d",i,cube);
		printf("\n");
		i++;
	}
	printf("this is for do while loop");
	i=1;
	j=1;
	cube=1;
	do {
		j=1;
		cube=1;
		do {
		cube=cube*i;
		j++;	
		}while(j<=3);
		printf("%d cube is :%d",i,cube);
		printf("\n");
		i++;
	}while(i<=number);
}
