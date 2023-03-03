#include<bits/stdc++.h>
using namespace std;
long long a[10000001];
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    long long  t;
    cin>>t;
    a[0]=0;
    a[1]=1;
    for(long long i=2;i<=1000000;i++)
   {
       a[i] = (i*a[i-1])%1000000007;
   }

   while(t--)
   {
       long long n,ans =0;
       cin>>n;
       for(long long i =0;i<n;i++)
       {

           long long x;
           cin>>x;
           ans = (ans+a[x])%1000000007;
       }
      cout<<ans<<endl;
}

   return 0;
    }

