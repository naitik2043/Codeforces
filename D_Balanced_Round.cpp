#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long cnt = 1;
        long long mx = 1;

        for(int i = 1; i < n; i++) {
            if(a[i] - a[i-1] <= k) {
                cnt++;
            } else {
                cnt = 1;
            }
            mx = max(mx, cnt);
        }

        cout << n - mx << endl;
    }

    return 0;
}