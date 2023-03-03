#include <iostream>
using namespace std;

int main() {
	int i,j,n,t,temp,count,N;
	cin>>t;
	while(t--)
	{   count=0;
	   string s;;
	    cin>>n;
	    cin>>s;

	    for(i=0;i<n;i++)
        {    if(s[i]=='1' && s[i+1]=='0')
           {
             count++;
           }

         }
	       cout<<count<<endl;
	}


	return 0;
}

