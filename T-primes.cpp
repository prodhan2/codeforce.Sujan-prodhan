#include<bits/stdc++.h>
using namespace std;
int main()
{ int t,count;
 cin>>t;
 while(t--)
 {  count=0;
 int i,x;
      cin>>x;
      for(i=1;i<=x;i++)
      {
          if(x%i==0)
          {
               count++;
          }
      }
        if(count==3)
            cout<<"YES"<<endl;
            else
             cout<<"NO"<<endl;
 }
}
