#include <iostream>
using namespace std;

int main() {
	int n,k,t,count;
	cin>>t;
	while(t--)
	{
	  count=0;
	  cin>>n>>k;
	  int a[n]  ;
	  for(int i=0;i<n;i++)
	  {
	      cin>>a[i];
	  if(a[i]>k)
	   count++;
    	}

cout<<count<<endl;
	}





	return 0;
}

