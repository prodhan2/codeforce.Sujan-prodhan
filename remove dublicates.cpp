
#include<bits/stdc++.h>
using namespace std;
#define   fast() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
fast();

set<int>s;
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=n-1;i>=0;i--)
{
    s.insert(a[i]);

}
int sz = s.size();
cout<<sz<<endl;
for(auto X : s)
{
    cout<<X<<" ";

}

cout<<endl;
return 0;
}
