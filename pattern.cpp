#include<stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int k;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=(n-i);j++) {
			printf(" ");
		}
		for( k=1;k<=i;k++) {
			printf("%d",k);
		}
		int s=k-2;
		for(int l=1;l<i;l++) {
			printf("%d",s--);
		}
		printf("\n");
	}
}
