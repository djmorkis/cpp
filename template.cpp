#include <bits/stdc++.h>
using namespace std;
template<class c> auto try_out(c x) -> decltype(cerr << x, 0);
char try_out(...);
struct err {
    template<class c,class d> err& operator << (pair<c,d> x) {
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
        return * this << "}";
    }
};

#ifdef LOCAL
#define debug(x) err() << "[ " << #x << " : " << x << " ]\n" 
#else
#define debug(x) 42
#endif

#define sz(x) ((int) (x).size())
#define rep(i, f, t) for (int i = f; i < t; ++i)
#define all(x) (x).begin(), (x).end()

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<ll>;






int main() 
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cout.tie(nullptr); cout.precision(20); cout.setf(ios::fixed);


    return 0;
}
