
#include<stdio.h>
#include<string.h>
int main()
     {
         int i;
         char name[50];
         scanf(" %[^\n]", name);
         for(i=0;i<strlen(name);i++)

         {
           if(name[i]=='a' || name[i]=='e'||name[i]=='i' ||name[i]=='o' ||name[i]=='u')
          {printf("%c",name[i]);
          }
         }

         printf("\n");

         for(i=0;i<strlen(name);i++)
       {
            if(name[i]!='a' && name[i]!='e'&& name[i]!='i' && name[i]!='o' && name[i]!='u')
          {printf("%c",name[i]);
          }

       }



     }
