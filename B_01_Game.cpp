#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin>>s;

        int one = 0, zero = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '1') one++;
            else zero++;
        }

        int op = min(one, zero);
        if(op %2 == 0){
            cout<<"NET"<<endl;
        } else{
            cout<<"DA"<<endl;
        }
    }

    return 0;
}