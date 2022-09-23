#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t;
	long int l,k;
	scanf("%d",&t);
	do{
	    scanf("%ld %ld",&l,&k);
	    if(l%k==0)
	    {
	        printf("0\n");
	    }
	    
	    else 
	    {
	        printf("1\n");
	    }
	    i++;
	}while(i<t);
	return 0;
}

