#include <stdio.h>

int main(void) {
	int T,X,A,flag=0;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d",&X);
	    while(X>0)
	    {
	    A=X%10;
	    if(A==4)
	    flag++;
	    X=X/10;
	    }
	    printf("%d \n",flag);
	    flag=0;
	    
	}
	
	return 0;
}

