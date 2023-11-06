#include <stdio.h>


int main(void) {
	int t;
	int a[4];
	scanf("%d",&t);
	while(t--)
	{
	    for(int i=0;i<4;i++)
	    scanf("%d",&a[i]);
	    if((pow(a[0],2))/((pow(a[2],3)))==(((pow(a[1],2)))/((pow(a[3],3)))))
	    printf("Yes\n");
	    else
	    printf("No\n");
	}
	return 0;
}

