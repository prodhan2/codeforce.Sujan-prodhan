#include<stdio.h>
int main()
{int i, t,n;
scanf("%d",&t);
 while(t--)
 { scanf("%d",&n);
   for(i=1;i<=n;i++)
   {if(n%i==0)
      printf("%d\t",i);
   }


 }





}
