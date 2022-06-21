//perfect number given range
#include<stdio.h>
int isPerfect(int n);
int main() {
	int start_number;
	int end_number;
	scanf("%d",&start_number);
	scanf("%d",&end_number);
	int arr[end_number];
	int len=0;
	for(int i=start_number;i<=end_number;i++) {
		if(isPerfect(i)) {
			arr[len++]=i;
		}
	}
	for(int i=0;i<len;i++) {
		printf("%d\t",arr[i]);
	}
}

int isPerfect(int n) {
	int sum=0;
	for(int i=1;i<=n/2;i++ ) {
		if(n%i==0) {
			sum=sum+i;	
		}
	
	}
	if(sum==n) {
		return 1;
	}
	return 0;
}
