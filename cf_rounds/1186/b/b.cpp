#include <bits/stdc++.h>
using namespace std;

#define int long long

main() 
{
    int n, m;
    cin >> n >> m;
    if (n * m < 2) {
        cout << 0;
        exit(0);
    }
    if (n > m) swap(n, m);
    long long ans = 0;
    int k = m - (m / 2);
    ans += (n / 3) * k;
    int r = n % 3;
    if (r == 1) {
        ans += (m + 1) / 3;
    }
    if (r == 2) ans += k;
    cout << ans;
}
