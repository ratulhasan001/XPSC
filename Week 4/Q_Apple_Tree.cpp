#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

const int N = 2e5 + 5;
vector<int>g[N];
vector<bool>visited(N);
vector<ll>leaf(N);

void dfs(int source) {
    visited[source] = true;
    for(auto x : g[source]) {
        if(!visited[x]) {
            dfs(x);
            leaf[source] += leaf[x];
        }
    }
    if(g[source].size() == 1 and source != 1) leaf[source] = 1;

}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
        int n;
        cin >> n;
        for(int i = 0; i <= n; i++) {
            g[i].clear();
            visited[i] = false;
            leaf[i] = 0;
        }

        for(int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dfs(1);
        int q;
        cin >> q;
        while(q--) {
            int x, y;
            cin >> x >> y;
            ll res = leaf[x] * leaf[y];
            cout << res << "\n";
        }
    }
    return 0;
}