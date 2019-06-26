#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_DEF
    #include <debug> 
#else
    #define debug(x) 42
#endif


int main() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& el : a) {
        cin >> el;
        if (el >= 0) 
            el = -el - 1;
    }
    if(n % 2 == 1) {
        int mn_pos = 0;
        int mn = INT_MAX;
        for (int i = 0; i < n; ++i) {
            if (a[i] < mn) {
                mn = a[i];
                mn_pos = i;
            }
        }
        a[mn_pos] = -a[mn_pos] - 1;
    }
    for (int el : a) 
        cout << el << ' ';
}
