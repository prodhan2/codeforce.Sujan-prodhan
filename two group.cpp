#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int t,n,a,sum =0;
    cin>>t;
    while(t--)
    {

        cin>>n;
        sum =0;
        for(long long int i =0;i<n;i++)
        {
           cin>>a;
           sum = sum+a;

        }
        cout<<abs(sum)<<endl;
        sum =0;
    }

    return 0;
}
