//   *
//  ***
// *****
#include<stdio.h>
int main() {
	for(int i=0;i<=2;i++) {
		for(int j=0;j<=2-i;j++) {
			printf(" ");
		}
		for(int j=1;j<=(2*i)+1;j++) {
			printf("*");
		}
		printf("\n");
	}
}
