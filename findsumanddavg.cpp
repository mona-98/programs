#include<stdio.h>
int main() {
	int sum=0;
	double avg;
	int i,j;
	int len;
	scanf("%d",&len);
	int arr[len];
	for(i=0;i<len;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	avg=sum;
	printf("%d-%d",sum,avg);
}
