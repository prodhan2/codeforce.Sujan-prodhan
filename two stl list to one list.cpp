
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    list<int>list1;
    for(int i=0;i<10;i++)
    {
        list1.push_back(rand()%100);

    }
    cout<<"AFTER list1 ="<<endl;
    for(int a:list1)
    {

        cout<<a<<" ";
    }
    cout<<endl;

     list<int>list2;
    for(int i=0;i<5;i++)
    {
        list2.push_back(rand()%100);

    }
    cout<<"AFTER list2 ="<<endl;
    for(int a:list2)
    {

        cout<<a<<" ";
    }
    cout<<endl;

    list1.splice(list1.end(),list2);
    cout<<"AFTER SPLICE OR ADD IS ="<<endl;
    for(int a:list1)
    {

        cout<<a<<" ";
    }
    cout<<endl;

    cout<<accumulate(list1.begin(),list1.end(),0)<<endl;



    }
