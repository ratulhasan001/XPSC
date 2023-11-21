#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        ll n,k;
        cin >> n >> k;
        ll x = 1, ans = 0;
        for(int i = 0; i < 31; i++){
            if(k & (1 << i)) ans = (ans + x) % MOD;
            x *= n;
            x %= MOD;
        }
        cout << ans << "\n";
    }
    return 0;
}