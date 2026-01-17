#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int neg1 = 0, pos1 = 0;
        int x;

        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x == -1) neg1++;
            else pos1++;
        }

        int op = 0;

        while (true) {

            if (neg1 % 2 != 0) {
                neg1--;
                pos1++;
                op++;
                continue;
            }

            if (pos1 < neg1) {
                neg1--;
                pos1++;
                op++;
                continue;
            }

            break;
        }

        cout << op << endl;
    }

    return 0;
}