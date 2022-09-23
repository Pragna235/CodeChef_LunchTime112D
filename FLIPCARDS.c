#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,x;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d",&n, &x);
	    if(x==0 || x==n)
	       printf("0\n");
	    else if(x<n)
	       {
	           if((n-x)<=x)
	              printf("%d\n",n-x);
	           else
	              printf("%d\n",x);
	       }
	    else
	       printf("%d\n",n);
	}
	return 0;
}

