//perfect number or not
#include<stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int arr[n/2];
	int org_number=n;
	int sum=0;
	for(int i=1;i<=(n/2);i++) {
		if(n%i==0) {
			sum=sum+i;
		}
	}
	if(sum==org_number) {
		printf("the number is perfect");
	}
	else {
		printf("te number is not perfect");
	}
}
