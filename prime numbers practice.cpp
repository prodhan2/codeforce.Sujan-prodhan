#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       ll x,c=0;
       cin>>x;
       for(ll j=1;j<=x;j++)
       {
           if(x%j==0)
           {
              c++;
           }
       }
       if(c==3)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
   }
   return 0;
}
