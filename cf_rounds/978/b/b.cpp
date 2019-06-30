#include <bits/stdc++.h>
using namespace std;
#define fr first
#define sc second
#define sz(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define forn(i, f, t) for (int i = f; i < t; ++i)
#define tpl template < class c
#define ris return * this
#define _if_(y) typename enable_if<sizeof(try_out(declval<c>())) y 1, err&>::type operator << (c x)
tpl> auto try_out(c x) -> decltype(cerr << x, 0);
char try_out(...);
struct err {
tpl , class d> err& operator << (pair<c,d> x) { 
ris << "(" << x.fr << ", " << x.sc << ")"; }
tpl > _if_(!=) { 
cerr << boolalpha << x; ris; }
tpl > _if_(==) {
*this << "{";
for (auto it = x.begin(); it != x.end(); it++) 
    *this << ", " + 2 * (it == x.begin()) << *it;
ris << "}";
}};
#ifdef LOCAL
#define debug(x) err() << "[ " << #x << " : " << x << " ]\n"
#else
#define debug(x) 42
#endif

using ll = long long;
using vi = vector<int>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vll = vector<ll>;


int main() 
{
    
}

