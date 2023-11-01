#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

double getDistance(int ax, int ay, int bx, int by) {
    return sqrt(((ax - bx) * (ax - bx)) + ((ay - by) * (ay - by)));
}

bool isInside(int ax, int ay, int px, int py, double r) {
    return r - getDistance(ax, ay, px, py) > 1e-15;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        int px, py, ax, ay, bx, by;
        cin  >> px >> py >> ax >> ay >> bx >> by;
        double l = 0.0, r = INT_MAX * 1.0, ans, m;

        while(r - l > 1e-15) {
            double m = (r - l) / 2 + l;
            if (isInside(ax, ay, 0, 0, m) and isInside(ax, ay, px, py, m)) {
                ans = m;
                r = m;
            }
            else if (isInside(bx, by, 0, 0, m) and isInside(bx, by, px, py, m)) {
                ans = m;
                r = m;
            }
            else if (isInside(ax, ay, 0, 0, m) and isInside(bx, by, px, py, m) and ((2 * m) - getDistance(ax, ay, bx, by)) > 1e-15) {
                ans = m;
                r = m;
            }
            else if (isInside(bx, by, 0, 0, m) and isInside(ax, ay, px, py, m) and ((2 * m) - getDistance(ax, ay, bx, by)) > 1e-15) {
                ans = m;
                r = m;
            }
            else l = m;
        }
        cout << fixed << setprecision(10) << ans << '\n';
    }
    return 0;
}