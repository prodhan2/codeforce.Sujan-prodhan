#include<stdio.h>
#include<string.h>
int main()
      {
    int i,count=0;
    char name[50];
    scanf(" %[^\n]",name);
    for(i=0;i<strlen(name);i++)
       {
         if(name[i] == ' ')
           {count++;
           }

       }
       printf("total words %d=",count+1);

      }
