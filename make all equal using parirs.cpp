#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n],b[1000];
	    for(int i=0;i<1000;i++)
	      {  b[i]=0; }

	   for(int i=0;i<n;i++)
	       {  cin>>a[i];}
	       for(int i=0;i<n;i++)

	      {b[a[i]]++;
	       }

	     int max=0;
	      for(int i=0;i<n;i++)
	      {if(b[i]>max)
	      max = b[i];}
	      cout<< n-max<<endl;
	}


	return 0;
}

