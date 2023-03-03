#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0, i,n,p,q,a[250];
    cin>>n>>p;
    for(i=0;i<p;i++)
    {
        cin>>a[i];
    }
    cin>>q;
     for(i=p;i<p+q;i++)
    {
        cin>>a[i];
    }
    sort(a,a+(p+q));
    for(i=0;i<p+q;i++)
    if(a[i]!=a[i+1])
    {
      count++;
    }
    if(count==n)
       {
         cout<<"I become the guy."<<endl;
       }
    else
       {
         cout<<"Oh, my keyboard!"<<endl;
       }
 return 0;
}
