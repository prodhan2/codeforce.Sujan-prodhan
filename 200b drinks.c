#include<iostream.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float sum=0;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<sum/n;
}
