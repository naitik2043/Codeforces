#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, q;
        cin >> n >> q;

        vector < long long > a(n);
        vector < long long > p(n, 0);

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
            if (i == 0) {
                p[i] = a[i];
            } else {
                p[i] = a[i] + p[i - 1];
            }
        }

        long long sum = p[n - 1];

        while (q--) {
            long long newSum;
            long long l, r, k;
            cin >> l >> r >> k;
            if (l == 1) {
                newSum = sum - p[r - 1] + k * (r - l + 1);
            } else {
                newSum = sum - p[r - 1] + p[l - 2] + k * (r - l + 1);
            }

            if (newSum % 2 == 0) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}