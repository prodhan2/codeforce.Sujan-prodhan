
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
	    string s,s1,s2;
	    cin>>s;
	    for(int i=0;i<s.length()/2;i++)
	    {
	        s1[i] = s[i];
	    }
	     for(int i= s.length()/2;i<s.length();i++)
	    {
	        s2[i] = s[i];
	    }

//       string x = reverse(s1.begin(),s1.end());
//       if()
if(s1==s2)
{

    cout<<"YES"<<endl;
}
else
{

    cout<<"NO"<<endl;
}


	}
	return 0;
}
