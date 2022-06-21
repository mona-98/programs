#include<stdio.h>
int findDigit(int number);
int main() {
	int number;
	scanf("%d",&number);
	int org_number=number;
	int digit = findDigit(number);
	int sum=0;
	int cube;
	int count;
	printf("%d",digit);
	for(;number>0;number=number/10) {
		cube=1;
		count=0;
		int temp = number%10;
		while(digit>count) {
			cube=cube*temp;
			count++;
		}
		sum=sum+cube;
		
	}
	if(sum==org_number) {
		printf("Armstrong");
	}
	else{
		printf("Not Armstrong");
	}
}
int findDigit(int number) {
	int count=0;
	while(number!=0) {
		count++;
		number=number/10;
	}
	return count;
}
