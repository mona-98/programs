#include<stdio.h>
int isdigitsDivideByNine(int n);
int main() {
	int start_number;
	int end_number;
	scanf("%d",&start_number);
	scanf("%d",&end_number);
	int arr[end_number];
	int len=0;
	for(int i=start_number;i<=end_number;i++) {
		if(i%9==0 && isdigitsDivideByNine(i)) {
			arr[len++]=i;
		}
	}
	
	for(int i=0;i<len;i++) {
		printf("%d\t",arr[i]);
	}
}

int isdigitsDivideByNine(int n) {
	int sum=0;
	for(;n!=0;) {
		sum=sum+(n%10);
		n=n/10;
	}
	if(sum%9==0) {
		return 1;
	}
	return 0;
	
}
