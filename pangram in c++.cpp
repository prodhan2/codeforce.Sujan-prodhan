#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,count=0,n;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
      {
          s[i]=tolower(s[i]);
      }
    sort(s.begin(),s.end());
   for(i=0;i<n;i++)
      { if(s[i]!=s[i+1])
      count++;

      }
    if(count==27)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
