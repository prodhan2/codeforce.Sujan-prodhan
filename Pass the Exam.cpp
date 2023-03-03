
#include <iostream>
using namespace std;

int main() {
    int x,y,z,t;
    cin>>t;
    while(t--)
    {cin>>x>>y>>z;

       if(x>=10 && y>=10 && z>=10)
        {if(x+y+z>=100)
        cout<<"PASS"<<endl;
        else
        cout<<"FAIL"<<endl;

    }
        else
        cout<<"FAIL"<<endl;
    }



	return 0;
}
