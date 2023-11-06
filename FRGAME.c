#include <stdio.h>

int main(void) {
	int t,a[4];
	scanf("%d",&t);
	while(t--)
	{
	    for(int i=0;i<4;i++)
	    scanf("%d",&a[i]);
	    if(a[0]<a[1])
	    a[0]=a[0]+a[2];
	    else
	    a[1]=a[1]+a[2];
	    if(a[0]<a[1])
	    a[0]=a[0]+a[3];
	    else
	    a[1]=a[1]+a[3];
	    if(a[1]>a[0])
	    printf("S\n");
	    else
	    printf("N\n");
	}
	return 0;
}

