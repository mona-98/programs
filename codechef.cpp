#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	int n;
	int k;
	int arr[n];
	int remaining;
	scanf("%d",&t);
	scanf("%d",&n);
	scanf("%d",&k);
	remaining=k;
	for(int i=0;i<t;i++) {
	    for(int j=0;j<n;j++) {
	        scanf("%d",&arr[j]);
	    }
	    for(int k=0;k<n;k++) {
	        if(arr[k]<=remaining) {
	            printf("%d",1);
	            remaining=remaining-arr[k];
	            
	        }
	        else {
	            printf("%d",0);
	        }
	        
	    }
	}
	return 0;
}
