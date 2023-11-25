#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
        int n;
        cin >> n;
        int a[n + 1][n + 1];
        int cnt = 1, ok = false;;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if(!ok) {
                    a[i][j]=cnt;
                    ok = true;
                }
                else {
                    a[i][j] = n * n + 1 - cnt;
                    cnt++;
                    ok = false;
                }
            }
            if (i % 2 == 0) reverse(a[i] + 1, a[i] + n + 1);

        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) cout << a[i][j] << " ";
            cout << '\n';
        }
    }
    return 0;
}