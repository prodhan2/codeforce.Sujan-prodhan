#include<stdio.h>
int main()
{
    int check,c=0,i,j;
    for(i=2;i<=5;i++)
    {
        check=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                check=0;
            }
        }
        if(check==1)
        {
            c++;
        }
    }
    printf("%d",c);
}
