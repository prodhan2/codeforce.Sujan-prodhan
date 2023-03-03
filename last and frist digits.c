/*#include<stdio.h>
int main()
{
    int n=4526763;
    int r=n%10;
    printf("last digits of the number==%d\n",r);
     while(n>9)
     {
    n=n/10;
     }
    printf("last digits of the number==%d",n);


}*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    double t = sqrt(n);
    if(t*t==n)
        printf("%lf == YES",t);
    else
 printf("%lf == NO",t);
}


