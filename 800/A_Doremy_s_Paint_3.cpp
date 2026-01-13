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

        if (n == 2) {
            cout << "Yes\n";
            continue;
        }

        unordered_map < int, int > freq;
        for (int x: a) {
            freq[x]++;
        }

        if (freq.size() > 2) {
            cout << "No\n";
        } else if (freq.size() == 1) {
            cout << "Yes\n";
        } else {
            auto it = freq.begin();
            int first = it -> second;
            it++;
            int second = it -> second;

            if (n % 2 == 0) {
                cout << (first == second ? "Yes\n" : "No\n");
            } else {
                cout << (abs(first - second) == 1 ? "Yes\n" : "No\n");
            }
        }
    }
    
    return 0;
}