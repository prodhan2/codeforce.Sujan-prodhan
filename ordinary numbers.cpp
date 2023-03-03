#include<iostream>
using namespace std;
int main()
{
   int t,n;
   cin>>t;
  int a[]={11,22,33,44,55,66,77,88,99,111,222,333,444,555,666,777,888,999};
   while(t--)
    {cin>>n;
    int count=0;
        if(n<10)
            {cout<<n<<endl;}
        else if            {for(int i=1;i<=100;i++)
             {if(a[i]<=n)
                {count++;}

             }
        cout<<count<<endl;};
    }





}
