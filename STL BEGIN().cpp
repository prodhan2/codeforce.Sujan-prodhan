#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>v = {12,3,4,4,2,2,3,45,67,8,9};
   sort(v.begin(),v.end());

////    v.erase(unique(v.begin(),v.end()),v.end());


    cout<<"UNIQUE valo is:"<<endl;
    for(int a:v)
    {
        cout<<a<<endl;
    }


}
