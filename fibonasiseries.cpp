#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a,b;
	a=0;
	b=1;
	printf("%d\t",a,b);
	for(int i=3;i<=n;i++) {
		int temp=a;
		a=b;
		b=temp+b;
		printf("%d\t",b);
	}
}
