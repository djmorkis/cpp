#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_DEF
    #include <debug> 
#else
    #define debug(x) 42
#endif

#define int long long

void solve() {
    int k, n, a, b;
    cin >> k >> n >> a >> b;
    if (k / b < n) {
        cout << -1 << "\n";
        return;
    }
    int l = 0;
    int r = n + 1;
    while (l < r) {
        debug(l);
        debug(r);
        int mid = l + (r - l) / 2;
        debug(mid);
        int cur = k;
        cur -= mid * a;
        if (cur >= 0) {
            int cn = cur / b;
            if (cur % b == 0) cn--;
            if (cn + mid >= n) {
                l = mid + 1;
            } else {
                r = mid;
            }
        } else {
            r = mid;
        }
    }
    cout << l - 1 << endl;
}

signed main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    for (cin >> q; q--; ) solve();
}
