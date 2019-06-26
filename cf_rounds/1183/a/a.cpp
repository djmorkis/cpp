#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_DEF
    #include <debug> 
#else
    #define debug(x) 42
#endif

bool sum (int a) {
    int res = 0;
    while (a) {
        res += a % 10;
        a /= 10;
    }
    return res % 4 == 0;
}

int main() 
{
    int a;
    cin >> a;
    while (!sum(a)) {
        a++;
        debug(a);
    }
    cout << a << endl;
}
