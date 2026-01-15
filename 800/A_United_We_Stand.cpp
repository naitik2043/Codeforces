#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long mx = *max_element(a.begin(), a.end());

        vector<long long> b, c;

        for (auto x : a) {
            if (x != mx)
                b.push_back(x);
            else
                c.push_back(x);
        }

        if (b.size() == 0) {
            cout << -1 << endl;
        } else {
            cout << b.size() << " " << c.size() << endl;

            for (auto x : b)
                cout << x << " ";
            cout << endl;

            for (auto x : c)
                cout << x << " ";
            cout << endl;
        }
    }

    return 0;
}