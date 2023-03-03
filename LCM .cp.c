#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b;
    cin>>a>>b;
    max = a>b?a:b;
    while(1)
    {
      if(max%a==0 && max%b==0)
      {
       cout<<"LEM is ="<<max;
       break;
      }
     max++;
    }



}
