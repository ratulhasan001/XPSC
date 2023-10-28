#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    while(cin >> n >> k) {
        vector<int>v(n);
        for(int &i : v) cin >> i ;

        int l = 0, r = INT_MAX, m, ans;

        while(l < r) {
            bool ok = true;
            int cnt = 0, sum = 0;
            m  = (r - l) / 2 + l;
            for(auto x : v) {
                if(x > m) {
                    l = m + 1;
                    ok = false;
                    break;
                }
                sum += x;
                if(sum == m) {
                    sum = 0;
                    cnt++;
                }
                else if(sum > m) {
                    cnt++;
                    sum = x;
                }
            }
            if(!ok) continue;
            if(sum != 0) cnt++;
            if(cnt > k) l = m + 1;
            else r = m;
            ans = m;
            if(l == r) ans = l;

        }
        cout << ans << '\n';
    }
    return 0;
}
