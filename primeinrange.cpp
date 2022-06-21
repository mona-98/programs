#include<stdio.h>
#include<math.h>
int isPrime(int);
int main() {
	int start_number;
	int end_number;
	scanf("%d",&start_number);
	scanf("%d",&end_number);
	int arr[end_number];
	int len=0;
	for(int i=start_number;i<=end_number;i++) {
		if(isPrime(i)) {
			arr[len++]=i;
		}
	}
	
	for(int i=0;i<len;i++) {
		printf("%d\t",arr[i]);
	}
}

int isPrime(int n) {
	int s=sqrt(n);
	for(int i=2;i<=s;i++) {
		if(n%i==0) {
			return 0;
		}
	}
	return 1;
}
