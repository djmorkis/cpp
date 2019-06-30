#include <bits/stdc++.h>
using namespace std;

template<class c> auto try_out(c x) -> decltype(cerr << x, 0);
char try_out(...);

struct err {
template<class c, class d> err& operator << (pair<c,d> x) {
    return * this << "(" << x.first << ", " << x.second << ")";
}
template<class c> typename enable_if<sizeof(try_out(declval<c>())) != 1, err&>::type operator << (c x) {
    cerr << boolalpha << x;
    return * this;
}
template<class c> typename enable_if<sizeof(try_out(declval<c>())) == 1, err&>::type operator << (c x) {
    *this << "{";
    for (auto it = x.begin(); it != x.end(); it++)
        *this << ", " + 2 * (it == x.begin()) << *it;
    return * this;
}
};

#ifdef LOCAL
    #define debug(x) err() << "[ " << #x << " : " << x << " ]\n"
#else
    #define debug(x) 42
#endif



int main() 
{
    cin.tie(0); 
    ios::sync_with_stdio(0); 

    int n;
    cin >> n;

    vector<long long> s(n);
    for (int i = 0; i < n; ++i) cin >> s[i];
    sort(s.begin(), s.end());
    s.resize(unique(s.begin(), s.end()) - s.begin());
    n = (int) s.size();

    int q; cin >> q;
    vector<pair<long long, int>> x(q);

    for (int i = 0; i < q; ++i) {
        long long l, r;
        cin >> l >> r;
        x[i] = make_pair(r - l + 1, i);
    }
    
    sort(x.begin(), x.end());

    vector<long long> d;
    for (int i = 1; i < n; ++i) d.push_back(s[i] - s[i - 1]);
    sort(d.begin(), d.end());

    int ind = 0;
    int tot = (int) d.size();
    vector<long long> ans(q);
    long long prev = 0;

    for (int i = 0; i < q; ++i) {
        while (ind < (int) d.size() && d[ind] < x[i].first) {
            prev += d[ind];
            ind++;
            tot--;
        }
        ans[x[i].second] = x[i].first + prev + tot * 1LL * x[i].first;
    }


    for (int i = 0; i < q; ++i) cout << ans[i] << " \n"[i == q - 1];
}

