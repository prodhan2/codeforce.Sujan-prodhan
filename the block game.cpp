#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{ int r=0,n;
	   cin>>n;
	   int orginal=n;
	   while(n != 0)
	    {
	      r=r*10+n%10;
	      n=n/10;

	    }
	     if(orginal == r)
	  cout<<"wins"<<endl;
	  else
        cout<<"loses"<<endl;

	}
	return 0;
}

