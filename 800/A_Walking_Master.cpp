#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;

        if(b > d){
            cout<<-1<<endl;
            continue;
        }
        int moveB = d-b;
        int newA = a + moveB;

        if(newA < c){
            cout<<-1<<endl;
            continue;
        }

        moveB += newA - c;

        cout<<moveB<<endl;
    }

    return 0;
}