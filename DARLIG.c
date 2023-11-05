#include <stdio.h>

int main(void) {
	int t,n,k;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&n,&k);
	    if(k==0)
	    {
	        if(n%4==0)
	        printf("Off\n");
	        else
	        printf("On\n");
	        
	    }
	    else if(k==1)
	    {
	        if(n%4==0)
	        printf("On\n");
	        else
	        printf("Ambiguous\n");
	        
	    }
	}
	return 0;
}

