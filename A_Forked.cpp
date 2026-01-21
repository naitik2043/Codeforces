#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;

        int xk, yk;
        cin >> xk >> yk;

        int xq, yq;
        cin >> xq >> yq;

        int dx[8] = { a, a, -a, -a, b, b, -b, -b };
        int dy[8] = { b, -b, b, -b, a, -a, a, -a };

        set<pair<int, int>> kingAttack, queenAttack;

        for(int i = 0; i < 8; ++i) {
            int x = xk - dx[i];
            int y = yk - dy[i];
            kingAttack.insert({x, y});
        }

        for(int i = 0; i < 8; ++i) {
            int x = xq - dx[i];
            int y = yq - dy[i];
            queenAttack.insert({x, y});
        }

        int result = 0;
        for(auto pos : kingAttack) {
            if(queenAttack.count(pos)) {
                result++;
            }
        }

        cout << result << endl;
    }
    return 0;
}