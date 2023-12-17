#include <bits/stdc++.h>
using namespace std;

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static
        const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    vector < int > x(a);
    vector < int > y(b);
    vector < int > ans;
    unordered_map < int, int , custom_hash > mp;
    for(auto &i : x) {
        cin >> i;
        mp[i]++;
    }
    for(auto &i : y) cin >> i;
    
    sort(x.begin(), x.end());
    for(auto i : y) {
        ans.push_back((lower_bound(x.begin(), x.end(), i) - x.begin()) + mp[i]);
    }
    for(auto i : ans) cout << i << " ";
    cout << '\n';

    return 0;
}