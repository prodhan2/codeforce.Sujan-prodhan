#include <iostream>
using namespace std;

int main() {
  int t,x,y;

  cin>>t;
  while(t--)
  {
      cin>>x>>y;
      if(x<y)
      swap(y,x);
      cout<<x-y<<endl;
  }
	return 0;
}

