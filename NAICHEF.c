#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,n,x;
	    float b1=0,c1=0;
	    scanf("%d %d %d",&n,&a,&b);
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&x);
	        if(x==a)
	            b1+=1;
            if(x==b)
                c1+=1;
	    }
	    printf("%f\n",(b1/n)*(c1/n));
	}
	return 0;
}

