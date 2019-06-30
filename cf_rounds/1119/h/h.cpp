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



    return 0;
}

