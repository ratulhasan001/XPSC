#include <bits/stdc++.h>

using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int testCase = 1; testCase <= T; testCase++) {

        int n, cnt = 0;
        cin >> n;
        vector < int > a(n);
        for (int & i: a) cin >> i;
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    if ((a[j] - a[i]) == (a[k] - a[j])) {
                        cnt++;
                    }

                }
            }
        }

        cout << (cnt >= 1 ? "No" : "Yes") << '\n';
    }
    return 0;
}