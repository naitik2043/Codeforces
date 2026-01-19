#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int count = 0;

        for (int d = 1; d <= 9; d++) {
            for (int m = d; m <= n; m *= 10) {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}