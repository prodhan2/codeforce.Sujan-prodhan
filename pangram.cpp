
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i,c=1;
    if(n>1){for(i=0;i<n;i++)
      {
          if(s[i]==s[i+1])
            c=0;
      }
    if(c==1)
        {cout<<"YES"<<endl;}
    else
         {cout<<"NO"<<endl;}
         }
     else
        cout<<"NO"<<endl;


return 0;

}
