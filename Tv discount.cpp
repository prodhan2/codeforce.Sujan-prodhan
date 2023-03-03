#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,d;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c>>d;
	    if((a-c)>(b-d))
	    cout<<" Second"<<endl;
	    else if((a-c)<(b-d))
	    cout<<" Frist"<<endl;
	    else
	    cout<<" Any"<<endl;
	}
	return 0;
}
