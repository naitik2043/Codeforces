#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int first = a, second = b;
        if(c % 2 != 0){
            first += 1;
        }

        if(first > second){
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    }

    return 0;
}