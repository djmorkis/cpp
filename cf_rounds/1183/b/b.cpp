#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_DEF
    #include <debug> 
#else
    #define debug(x) 42
#endif


void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int mn = *min_element(a.begin(), a.end());
    int mx = *max_element(a.begin(), a.end());
    if (mx - k * 2 > mn) {
        cout << -1 << endl;
        return;
    }
    cout << mn + k << endl;
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    for (cin >> q; q--;) solve();
}
