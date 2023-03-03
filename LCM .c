#include<stdio.h>

int main()
{

    int a,b;
    scanf("%d %d",&a,&b);
  int  mx = a>b?a:b;
    while(1)
    {
      if(mx%a==0 && mx%b==0)
      {
       printf("%d",mx);
       break;
      }
     mx++;
    }



}
