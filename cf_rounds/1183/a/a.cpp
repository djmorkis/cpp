#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
    int res = 0;
    while (n) { res += n % 10; n /= 10; }
    return res;
}


main() 
{

    int n; cin >> n;

    while (sum(n) % 4 != 0) n++;
    
    cout << n << endl;
}
