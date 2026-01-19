#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int op = 0;

        for (int i = 0; i < n - 1;) {
            if (a[i] % 2 != a[i + 1] % 2) {
                i++;
            } else {
                a[i] *= a[i + 1];
                op++;
                i++;
            }
        }

        cout << op << endl;
    }

    return 0;
}