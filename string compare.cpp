#include <iostream>
using namespace std;


	// your code goes here

int main() {
    int t;
    cin >> t;
    while(t--){
        string s, n[5];
        cin >> s;

        string d;
        cin >> d;

        for (int i = 0; i < 5; i++){
            if (s[i] == d[i]){
                n[i] = 'G';
            }
            else {
                n[i] = 'B';
            }
        }

        for (int i = 0; i < 5; i++){
            cout << n[i];
        }
        cout << endl;
    }
    return 0;
}
