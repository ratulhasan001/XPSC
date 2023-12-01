#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void attack() {
    int m;
    cin >> m;
    vector < string > a, b;
    int f = 0;
    for (int i = 0; i < 2; i++) {
        string s;
        cin >> s;
        a.push_back(s);
        b.push_back(s);
    }
    int i = 0;
    for (int j = 0; j < m;) {
        if (a[i][j] == 'W')
            break;
        a[i][j] = 'W';
        i = 1 - i;
        if (a[i][j] != 'B') {
            j++;
            i = 1 - i;
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 'B') {
                f = 1;
                break;
            }
        }
        if (f == 1) break;
    }
    if (f == 0)
        cout << "YES" << endl;
    else {
        i = 1;
        f = 0;
        for (int j = 0; j < m;) {
            if (b[i][j] == 'W')
                break;
            b[i][j] = 'W';
            i = 1 - i;
            if (b[i][j] != 'B') {
                j++;
                i = 1 - i;
            }

        }
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < m; j++) {
                if (b[i][j] == 'B') {
                    f = 1;
                    break;
                }
            }
            if (f == 1) break;
        }
        if (f == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
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