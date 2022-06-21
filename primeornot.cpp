#include<stdio.h>
#include<math.h>
int main() {
	int n;
	scanf("%d",&n);
	int s = sqrt(n);
	int flag=0;
	for(int i=2;i<=s;i++) {
		if(n%i == 0) {
			flag=1;
			break;
		}
	}
	
	if(flag==1) {
		printf(" %d not a prime number",n);
	}
	else {
		printf("%d is a prime number",n);
	}
	
}
