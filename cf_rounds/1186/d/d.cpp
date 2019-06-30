#include <bits/stdc++.h>
using namespace std;

#define int long long

main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> b(n);
    vector<double> a(n);
    vector<pair<int,int>> negs;
    vector<pair<int,int>> poss;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        string num = "";
        for (char c : s) {
            if (c == '.') {
                break;
            }
            num += c;
        }

        a[i] = stod(s);
        b[i] = atoi(num.c_str());
        
        if (fabs(a[i] - b[i]) > 0) {
            if (s[0] == '-') {
                negs.emplace_back(b[i], i);
            } else {
                poss.emplace_back(b[i], i);
            }
        }

    }
    long long now = accumulate(b.begin(), b.end(), 0ll);
    
    int pos_ind = 0;
    int neg_ind = 0;

    cerr << a[0] - b[0] << endl;

    cerr << "a:\n";
    for (auto el : a) {
        cerr << el << "\n";
    }
    cerr << endl;

    if (now > 0) {
        while (now > 0 && neg_ind < (int) negs.size())
        {
            b[negs[neg_ind++].second]--;
            now--;
        }
    }

    else if (now < 0) {
        while (now < 0 && pos_ind < (int) poss.size())
        {
            b[poss[pos_ind++].second]++;
            now++;
        }
    }
    

    assert(accumulate(b.begin(), b.end(), 0ll) == 0);

    for (int i = 0; i < n; ++i)
    {
        if (fabs(a[i] - b[i]) >= 1) {
            assert(false);
        }
    }

    for (auto el : b) {
        cout << el << "\n";
    }

}
