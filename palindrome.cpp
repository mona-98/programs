#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int rev=0;
	int org_number=n;
	for(;n!=0;) {
		int r = n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(org_number == rev) {
		printf("palindrome");
	}
	else{
		printf("Not palindrome");
	}
}
