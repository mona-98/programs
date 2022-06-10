//   1
//   2 3
//   4 5 6
//   7 8 9 10
#include<stdio.h>

int main() {
	int number=4;
	int count=0;
	for(int i=1;i<=4;i++) {
		for(int j=1;j<=i;j++) {
			printf("%d",count=count+1);
		}
		printf("\n");
	}
}
