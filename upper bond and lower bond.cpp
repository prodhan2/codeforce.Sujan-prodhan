#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{

int  a[10] = {19,3,5,7,1,22,44,63,12,23} ;
  sort(a,a+10);
  for(int n:a)
  {
      cout<<n<<" ";
  } int x;
   cin>>x;
  cout<<endl;
  int b = upper_bound(a,a+10,x)-a;
  cout<<b<<endl;

  getch();

}
