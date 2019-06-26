#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_DEF
    #include <debug> 
#else
    #define debug(x) 42
#endif

void solve() {
    int n;
    cin >> n;
    multiset<int> all;
    map<int,int> cnt;
    for (int i = 0; i < n; ++i) {
        int q;
        cin >> q;
        nums.erase(cnt[q]);
        cnt[q]++;
        nums.insert(cnt[q]);
    }
    int need = *all.rbegin();
    set<int> x;
    for ( ; need >= 1; need--) {
        if (all.empty())
            break;
        if (*all.rbegin() >= need) {
            x.insert(need);
            all.erase(--all.end());
        }
    }
    int ans = 0;
    for (int el : x) ans += el;
    cout << ans << "\n";
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    for (cin >> q; q--; solve());
}
