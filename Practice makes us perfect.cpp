#include <iostream>
using namespace std;

int main() {

	int count=0,i,a[4];
	for(i=0;i<4;i++)
	{cin>>a[i];
	if(a[i]>=10)
            count++;
	}

	cout<<count<<endl;
	return 0;
}

