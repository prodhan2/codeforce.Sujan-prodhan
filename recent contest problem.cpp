#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,l,k;
	cin>>t;
	while(t--)

	{ l=0;
     	k=0;
	    cin>>n;
	    string a[n];
	    for(int i=0;i<n;i++)
	       {
	           cin>>(a[i]);
	           if(a[i] == "START38")
	           k++;
	           else if (a[i] == "LTIME108")
	           l++;
	       }

	    cout<<k<<" "<<l<<endl;

	}


	return 0;
}

