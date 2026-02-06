#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int maxLen = 0, curLen = 0;

        for (int i = 0; i < n; i++) {
            if (i == 0 || s[i] == s[i - 1]) {
                curLen++;
            } else {
                curLen = 1;
            }
            maxLen = max(maxLen, curLen);
        }

        cout << maxLen + 1 << '\n';
    }

    return 0;
}