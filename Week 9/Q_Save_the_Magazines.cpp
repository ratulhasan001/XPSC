#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void attack() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a[n];
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int last = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') last = i;
        else if (s[i] == '1') {
            if (last != -1) {
                if (a[last] > a[i]) {
                    s[last] = '1';
                    s[i] = '0';
                    last = i;
                }
            }
        }

    }
    sum = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == '1') {
            sum = sum + a[i];
        }
    cout << sum << "\n";
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int testCase = 1; testCase <= T; testCase++) {

        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}