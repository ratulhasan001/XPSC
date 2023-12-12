#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

void attack() {
    int n, k;
    cin >> n >> k;
    k = k % (n + 1);
    vector < int > v(n + 1, 0);
    vector < int > freq(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        freq[v[i]]++;
    }
    int mx;
    for (int i = 0; i <= n; i++) {
        if (freq[i] == 0) {
            mx = i;
            break;
        }
    }
    v[0] = mx;
    for (int i = 0; i <= n; i++) {
        if (n < (k + i)) {
            freq[(i + k) % (n + 1)] = v[i];
            continue;
        }
        freq[k + i] = v[i];
    }
    for (int i = 1; i <= n; i++) cout << freq[i] << " ";
    cout << '\n';
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}