#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif


int total(vector<int>v) {
    int sum = 0;
    for(auto x : v) sum += x;
    return sum;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {

        int n, s, r, cnt = 0, fnt = 0; 
        cin >> n >> s >> r;
        vector<int>v;
        int mx = s - r;
        int baki = r / (n - 1);
        v.push_back(mx);
        for(int i = 0; i < n - 1; i++) {
            v.push_back(baki);
        }
        debug(v);
        ranges::sort(v);
        if(total(v) < s) {
            bool ok = false;
            while(true) {
                for(int i = 0; i < n - 1; i++) {
                    v[i]++;
                    if(total(v) == s) {
                        ok = true;
                        break;
                    }
                }   
                if(ok) break;
            }
        }
        else if(total(v) > s) {
            bool ok = false;
            while(true) {
                for(int i = 0; i < n - 1; i++) {
                    if(v[i] - 1 >= 2) v[i]--;
                    if(total(v) == s) {
                        ok = true;
                        break;
                    }
                }
                if(ok) break;
            }
        }
        for(auto x : v) cout << x << ' ';
        cout << '\n';


    }
    return 0;
}