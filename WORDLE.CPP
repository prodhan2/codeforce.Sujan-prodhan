#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, t;
    string m,a,b;
    cin>>t;
     while(t--)
    {
        cin>>a;
        cin>>b;

        for(i=0;i<5;i++)
            {
                if(a[i]==b[i])
                {m[i]='G';}
                else
                  {m[i]='B';}
            }
        for(i=0;i<5;i++)
            cout<<m[i];
    }






}

