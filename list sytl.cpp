#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    list<int>li;
   // list<int>::iterator it;
    for(int i=0;i<10;i++)
    {
        li.push_back(rand()%100);
    }
    li.push_front(100);
    li.push_back(100);
    cout<<"INITIAL VALUE"<<endl;
    for(int a:li)
    {

        cout<<a<<" ";
    }
    cout<<endl;
    cout<<"after sort:"<<endl;
    li.sort();

 for(int a:li)
    {

        cout<<a<<" ";
    }
    cout<<endl;
   li.unique();
    cout<<"After unique value is::"<<endl;
    for(int a:li)
    {

        cout<<a<<" ";
    }
      cout<<endl;


      li.remove(73);
      li.remove(100);
      cout<<"after remove"<<endl;
      for(int a:li)
    {

        cout<<a<<" ";
    }
      cout<<endl;
}
