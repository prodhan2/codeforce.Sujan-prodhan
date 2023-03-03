#include <iostream>
using namespace std;

int main() {
	int i,t,x,count;
	cin>>t;
	while(t--)
	{
	  cin>>x;
	  int a[x];
	  for(int i=0;i<x;i++)
	   { cin>>a[i];
	   }
   count=0;
  for(int i=0;i<x;i++)

	    if(a[i]>=1000)
	      { count++;}

	cout<<count<<endl;

	}


	return 0;
}

