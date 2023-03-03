#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int t;
   cin>>t;
   while(t--)
   {
        int n;
        cin>>n;
        int arr[n+2];
        for(int i=0;i<n;i++) cin>>arr[i];
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j!=i)
                {

                    sum^=arr[j];
                }
            }

            if(sum==arr[i])
            {
                cout<<arr[i]<<endl;
                sum = 0;
                break;
            }
        }



   }
   return 0;

}

