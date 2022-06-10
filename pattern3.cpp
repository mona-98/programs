// 1
// 22
// 333
// 4444
#include<stdio.h>
int main() {
	int num=4;
	for(int i=1;i<=num;i++) {
		for(int j=1;j<=i;j++) {
			printf("%d",i);
		}
		printf("\n");
	}
}
