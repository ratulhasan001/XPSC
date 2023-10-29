#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

struct TIME {
  int seconds;
  int minutes;
  int hours;
};
void time_Travel(struct TIME t1, struct TIME t2, struct TIME *difference){
    
    if(t2.seconds > t1.seconds) {
        --t1.minutes;
        t1.seconds += 60;
    }

    difference->seconds = t1.seconds - t2.seconds;
    if(t2.minutes > t1.minutes) {
        --t1.hours;
        t1.minutes += 60;
    }
    difference->minutes = t1.minutes-t2.minutes;
    difference->hours = t1.hours-t2.hours;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
        struct TIME t1, t2, difference;
        int n;
        cin >> n >> t1.hours >> t1.minutes;
        priority_queue<pii, vector<pii>, greater<pii>> pq;
        int flag = 0;
        while(n--) {
            cin >> t2.hours >> t2.minutes;
            if(t1.hours == t2.hours and t1.minutes == t2.minutes) flag = 1;
            else {
                t1.seconds = 0, t2.seconds = 0;
                time_Travel(t2, t1, &difference);
                int sm = 0, sh = 0;
                sh += difference.hours;
                sm += difference.minutes;
                if(sm < 0) sm += 60, sh--;
                if(sh < 0) sh += 24;
                pq.emplace(sh,sm);
            }
        }
        if(flag) {
            cout << "0 0" << "\n";  
            continue;
        }
        cout << pq.top().first << " " << pq.top().second << '\n';
    }
    return 0;
}