#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int x,y,z(0),max(0);

    while(t--)
    {
        cin>>x>>y;
        z=z-x;
        z=z+x;
        if(z>max)
        {
            max=z;
        }
    }

   cout<<max<<endl;

}
