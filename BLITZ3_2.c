#include <stdio.h>

int main(void) {
	int x,n,a,b;
	scanf("%d",&x);
	
	while(x--)
	{
	scanf("%d",&n);
	scanf("%d",&a);
	scanf("%d",&b);
	
	    int temp=2*(180+n);
	    int temp2=temp-(a+b);
	    printf("%d \n",temp2);
	}
	return 0;
}

