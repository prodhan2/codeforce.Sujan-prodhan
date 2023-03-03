#include <iostream>
using namespace std;

int main() {

	int t,x,y;
	cin>>t;
	while(t--)
	{
	  cin>>x>>y;
	  if(x>y)
	    cout<<"SECOND"<<endl;
	  else if(x==y)
	    cout<<"ANY"<<endl;
	    else
	    cout<<"FRIST"<<endl;
	}

	return 0;
}

