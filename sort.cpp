#include<bits\stdc++.h>
using namespace std;
int main()
{int i,a[100];
for(i=0;i<5;i++)
    {cin>>a[i];}
    for(i=0;i<5;i++)
      {cout<<a[i]<<endl; }
cout<<"\n after sorting "<<endl;

    sort(a,a+5);
    for(i=0;i<5;i++)
      cout<<a[i]
      <<endl;
}
