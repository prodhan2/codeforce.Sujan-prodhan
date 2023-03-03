
#include<stdio.h>
#include<string.h>

int main()
{
    int i,t, count[26]={0};
    char a[100];
    char b[2];
    scanf("%d",&t);

       while(t--)
     {  scanf(" %[^\n]",a);

    {
     for(i=0;i<strlen(a);i++)
        if(a[i]>='a' && a[i]<='z')
            count[a[i]-'a']++;

    }
    for(i=0;i<26;i++)
      if(count[i]!=0)

         printf("%c ------ %d\n",i+'a',count[i]) ;



         }




        }

