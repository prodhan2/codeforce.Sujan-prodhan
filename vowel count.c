#include<stdio.h>
#include <string.h>
int main()
        {
            int i,c,l,t;
            char name[50];
            scanf("%d",&t);
      while(t--)
       {
       scanf(" %[^\n]",name);
       l=strlen(name);
       c=0;
       for(i=0;i<l;i++)
           {
             if(name[i]=='a' || name[i]=='e'||name[i]=='i' ||name[i]=='o' ||name[i]=='u')
            c++;
           }

           printf("%d",c);
       }



      }




