
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
    {

        int n;
        cin>>n;
        string s,A,B;
        cin>>s;
        sort(s.begin(),s.end());

        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                A = A+s[i];
            }
            else
            {
                 B = B+s[i];
            }


        }


        if(A==B)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }



}
