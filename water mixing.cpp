#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    if(a>b)
	    {
	       if(a-b<=y)
           {cout<<"YES"<<endl;}
           else
           {
               cout<<"NO"<<endl;
           }

	    }
	    else if(b>a)
	    {

	        if(b-a<=x )
	        {
	            cout<<"YES"<<endl;
	        }
	        else
	        {
	            cout<<"NO"<<endl;

	        }

	    }
	    else
        {
        cout<<"YES"<<endl;

        }

	}

	return 0;
}

