#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,n,m;
   cin>>n>>m;
   int a[m];
   for(i=0;i<m;i++)
   {
       cin>>a[i];
   } int min1,d,num=100;
   sort(a,a+m);
   for(i=0;i<m;i++)
   {
       d=a[n-1] - a[i];
       min1= min(num,d);
       if(n-1 == m-1 || n==m)
       {
           break;
       }
       n++;
   }
   cout<<min1<<endl;

}
