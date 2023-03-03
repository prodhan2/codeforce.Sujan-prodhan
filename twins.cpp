#include<bits/stdc++.h>
using namespace std;
int main()
{

    int sum=0,count=0,sum1=0,t;
cin>>t;
int a[t];
for(int i=0;i<t;i++)
    { cin>>a[i];
      sum=sum+a[i];
     }
  sum=sum/2;
  sort(a,a+t);
  for(int i=t-1;t>0;i--)
  {
     sum1=sum1+a[i];
     count++;
      if(sum1>sum)
        break;
  }
  cout<<count<<endl;

}
