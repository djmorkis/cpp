#include<deque>
#include<utility>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    deque<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<pair<int,int>> pre;
    int mx = *max_element(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        int x = a[0];
        int y = a[1];
        pre.emplace_back(x, y);
        a.pop_front();
        a.pop_front();
        a.push_front(max(x, y));
        a.push_back(min(x, y));
        if (x == mx || y == mx) 
            break;
    }
    a.pop_front();
    for (int it = 0; it < q; ++it) {
        long long m;
        cin >> m;
        if (m <= pre.size()) 
            cout << pre[m - 1].first << ' ' << pre[m - 1].second << endl;
        else
            cout << mx << ' ' << a[(m - pre.size() - 1) % a.size()]  << endl;
    }
}
