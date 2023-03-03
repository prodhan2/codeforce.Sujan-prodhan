#include<stdio.h>
#include<string.h>
int main()
{//char name[5][50]={"sujan","prodhan","arif","nazmul","mahfuz"};
int j,i,n;
char name[5][50],temp[50];
  for(i=0;i<5;i++)
  {
    scanf(" %[^\n]",name[i]);
  }
   for(i=0;i<5;i++)
     {
      for(j=i+1;j<5;j++)
    {  if(strcmp(name[i],name[j])>0)
        {
       strcpy(temp,name[i]);
      strcpy(name[i],name[j]);
       strcpy(name[j],temp);
       }
    }
    }
for(i=0;i<5;i++)
  {
    printf(" %s\n",name[i]);
  }
    }


