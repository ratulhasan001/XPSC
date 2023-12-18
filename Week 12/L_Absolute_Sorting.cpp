#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 31
#define debug_array(x,y) 31
#else
#include "deBUG.h"
#endif

void attack() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;

    int left = 0, right = 1e9;
    for(int i = 0; i < n - 1; i++) {

        int midL = (a[i] + a[i + 1]) / 2;
        int midR = (a[i] + a[i + 1] + 1) / 2;
        if(a[i] < a[i + 1]) right = min(right, midL);
        if(a[i] > a[i + 1]) left = max(left, midR);
    }

    cout << (left <= right ? left : -1) << '\n';
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}