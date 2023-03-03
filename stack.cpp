
#include<bits/stdc++.h>
using namespace std;
#define   fast() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
fast();
stack<int>st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
cout<<"size"<<st.size()<<endl;
while(!st.empty())
{
    cout<<st.top()<<endl;
    st.pop();
}

return 0;
}
