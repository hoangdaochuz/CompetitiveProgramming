#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a),_b=(b); i<=_b; i++)
#define FORD(i,a,b) for(int i=(a),_b=(b); i>=_b; i--)
#define REP(i,a) for(int i=0,_a=(a); i<_a; i++)
#define EACH(it,a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)

#define DEBUG(x) { cout << #x << " = "; cout << (x) << endl; }
#define PR(a,n) { cout << #a << " = "; FOR(_,1,n) cout << a[_] << ' '; cout << endl; }
#define PR0(a,n) { cout << #a << " = "; REP(_,n) cout << a[_] << ' '; cout << endl; }

#define sqr(x) ((x) * (x))
using namespace std;

long long f[] = {0, 1, 1, 1, 2, 1, 2, 2, 2, 3};
long long g[] = {1, 1, 1, 1, 2, 1, 2, 1, 1, 3};

int main() {
    int ntest; cin >> ntest;
    assert(0 <= ntest && ntest <= 1000);
    while (ntest--) {
        long long w; int c; cin >> w >> c;
        assert(0 < w && w <= 1000000000000000000LL);
        assert(0 < c && c <= 15);
        if (w % 1000) cout << 0 << endl;
        else {
            w /= 1000;
            long long count = 0, ways = 1;
            long long t = 5; REP(i,c) t *= 10;
            count = (w - t) / t;
            w -= count * t;
            FOR(i,0,c) {
                long long cur = w % 10;
                w /= 10;
                count += f[cur];
                ways *= g[cur];
            }
            if (w > 0) {
                count += w * 2;
            }
            cout << count << ' ' << ways << endl;
        }
    }
    return 0;
}
