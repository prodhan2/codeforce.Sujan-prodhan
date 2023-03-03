#include<bits/stdc++.h>
using namespace std;
int main(){

 int i, t,n;
 string s;
 cin>>n>>t>>s;
 while(t--)
 {
     for(i=0;i<s.size();i++ )
     {
         if(s[i]=='B' && s[i+1]=='G')
           {
                s[i]='G';
            s[i+1]='B';
            i++;
           }
     }
 }
  cout<<s<<endl;

         }
