#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[100];
   gets(a);
    for(i=0;i<strlen(a);i++)
   {
    printf("%c",a[i]);
   }
   printf("\n");
    for(i=strlen(a)-1;i>=0;i--)
   {
    printf("%c",a[i]);
   }
   printf("\n");


}
