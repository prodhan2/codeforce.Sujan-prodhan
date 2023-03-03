#include <iostream>
using namespace std;

int main() {
	int t,x,a,b;
	cin>>t;
	while(t--)
	{cin>>x>>a>>b;
	 if((a*1+b*2)>=x)
	    cout<<"Qualify"<<endl;
	  else
	    cout<<"NotQualify"<<endl;
	}


	return 0;
}

