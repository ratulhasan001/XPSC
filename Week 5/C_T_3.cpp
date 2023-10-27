#include <bits/stdc++.h>
using namespace std;

bool ok(int dif, vector<int>v, int n, int c) {
    int last = 0, cnt = 1;
    for(int i = 1; i < n; i++) {
        if(abs(v[i] - v[last]) >= dif) {
            cnt++;
            last = i;
        }
    }
    return cnt >= c;
}


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        int n, c;
        cin >> n >> c;
        vector<int>v(n);
        for(int &i : v) cin >> i;
        sort(v.begin(), v.end());
        int l = 0, r = INT_MAX, ans;
        while(l <= r) {
            int mid = (r - l) / 2 + l;
            if(ok(mid, v, n, c)) {
                ans = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        cout << ans << '\n';

    }
    return 0;
}


