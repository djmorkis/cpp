#include <bits/stdc++.h>
using namespace std;


main() 
{   
    string a, b;
    cin >> a >> b;

    int an = (int) a.size();
    int bn = (int) b.size();
    
    int ans = 0;

    vector<int> pref0(n + 5);
    vector<int> pref00(n + 5); 
    vector<int> pref1(n + 5);

    pref[0] = a[0] == '0';
    pref[1] = a[1] == '1';

    for (int i = 1; i < n; ++i) {
        
        pref0[i] = pref0[i - 1] + a[i] == '0';
        pref1[i] = pref1[i - 1] + a[i] == '1';

        if (i % 2 == 0) 
        {
            pref00[i] = pref00[i - 1] + a[i] == '0';
        } 
        else 
        {
            pref00[i] = pref00[i - 1];
        }
    }

    vector<int> pref1(n + 5);
    pref1[0] = a[0] == '1'; 
    for (int i = 1; i < n; ++i) {
        pref1[i] = pref1[i - 1] + a[i] == '1';
    }


    cout << ans;

}
