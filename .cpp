#include<iostream>
using namespace std;
int main()
{ int c;
    int a[7]={1,2,2,3,4,4,6};
    for( int i=0;i<7;i++)
       { c=0;
           for(int j=0;j<7;j++)
             if(a[i]==a[j])
                  c++;

   if(c%2==1)
   cout<<c<<"   "<<a[i]<<endl;
       }

       return 0;
}
