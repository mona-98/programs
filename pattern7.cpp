//   1
//  2 2
// 3 3 3
//4 4 4 4
#include<stdio.h>
int main() {
	for(int i=1;i<=4;i++) {
		for(int j=1;j<=(4-i);j++) {
			printf(" ");
		}
		for(int k=1;k<=i;k++) {
			printf("%d ",i);
		}
		printf("\n");
	}
}
