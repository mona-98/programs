#include<stdio.h>
int main() {
	int n;
	int fact=1;
	scanf("%d",&n);
	for(int i=2;i<=n;i++) {
		fact =fact*i;
	}
	printf("%d\n",fact);
	int i=2;
	fact=1;
	while(i<=n) {
		fact=fact*i;
		i++;
	}
	printf("%d\n",fact);
	fact=1;
	i=2;
	do {
		fact=fact*i;
		i++;
	}while(i<=n);
	printf("%d",fact);
}
