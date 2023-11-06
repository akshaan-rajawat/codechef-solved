#include <stdio.h>

int main(void) {
    int t,a,b,k;
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&k);
        if(a%k==0 && b%k==0)
        printf("yes \n");
        else
        printf("no \n");
    }
	
	return 0;
}

