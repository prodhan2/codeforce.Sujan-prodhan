#include<stdio.h>
int main()
{
    int count=0,c,i,j,a,b;
    for(i=2;i<=5;i++)
    {c=0;
         for(j=2;j<=i;j++)
    {
         if(i%j!=0)
         {c=1;

         }
    }
if(c==1)
  {count++;}
    }
   printf("%d",count);




}
