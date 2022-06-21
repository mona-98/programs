#include<stdio.h>
int isArmstrong(int n);
int findDigit(int n);
int main() {
	int start_number;
	int end_number;
	scanf("%d",&start_number);
	scanf("%d",&end_number);
	int arr[end_number];
	int len=0;
	for(int i=start_number;i<=end_number;i++) {
		if(isArmstrong(i)) {
			arr[len++]=i;
		}
	}
	for(int i=0;i<len;i++) {
		printf("%d\t",arr[i]);
	}
}

int isArmstrong(int n) {
	int digit = findDigit(n);
	int sum=0;
	int count;
	int org_number=n;
	int cube;
	for(;n>0;n=n/10) {
		cube=1;
		count=0;
		int temp = n%10;
		while(digit>count) {
			cube=cube*temp;
			count++;
		}
		sum=sum+cube;
		
	}
	if(sum==org_number) {
		return 1;
	}
	else{
		return 0;
	}
	
}

int findDigit(int n) {
	int count=0;
	for(;n!=0;n=n/10) {
		count++;
	}
	return count;
}
