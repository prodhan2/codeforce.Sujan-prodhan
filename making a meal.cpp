 #include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string str;
	    for(int i=0;i<n;i++)
	    {
	        string s;
	        cin>>s;
	        str=str+s;
	    }
	    vector<int>v;
	    string meal = "codechef";
	    for(int i=0;i<meal.size();i++)
	    {
	       if(meal[i]=='c'||meal[i]=='e')
	       {
	            v.push_back((count(str.begin(),str.end(),meal[i]))/2);
	       }
	       else

 {
	            v.push_back(count(str.begin(),str.end(),meal[i]));
	       }
	    }

	    int ans =*min_element(v.begin(),v.end());
	    cout<<ans<<endl;
	    str.erase();
	}
	return 0;
}
