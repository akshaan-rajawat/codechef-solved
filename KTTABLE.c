#include <stdio.h>
void main() {
int T;
   
    int StdCooked = 0;

scanf("%d",&T);
while(T--)
{
   int N,i=0;
   scanf("%d",&N);
   int A[N],B[N];
   for(int i=0;i<N;i++)
   scanf("%d",&A[i]);
   i=0;
    for(int i=0;i<N;i++)
   scanf("%d",&B[i]);
    i = 0;
   for(i=0;i<N;i++)
   {
   if(i==0&&B[0]<=A[0])
   StdCooked ++;
   else if(A[i]-A[i-1]>=B[i]&&i>0)
   StdCooked ++;
   }
   printf("%d \n",StdCooked);
  StdCooked=0;

   
   
   
   
}

return 0;
}

