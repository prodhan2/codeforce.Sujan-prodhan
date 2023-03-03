
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long mod =998244353;
	int t;
	cin>>t;
	while(t--)
    {
       int n,sum =0;
       cin>>n;
       int a[n];
        for(int i=0;i<n;i++)
        {

            cin>>a[i];
            sum = (sum + a[i])%mod;
        }
        sum = (sum * (sum-1))%mod;
        cout<<sum<<endl;
    }




}
