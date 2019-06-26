#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    scanf("%d", &n);
    multiset<int> nums;
    map<int,int> cnt;
    for (int i = 0; i < n; ++i) {
        int foo;
        scanf("%d", &foo);
        cnt[foo]++;
    }
    for (auto el : cnt) 
        nums.insert(el.second);
    set<int> ans_set;
    for (int now = *--nums.end(); now > 0 && !nums.empty(); now--) {
        if (*--nums.end() >= now) {
            ans_set.insert(now);
            nums.erase(--nums.end());
        }
    }
    printf("%d\n", accumulate(ans_set.begin(), ans_set.end(), 0));
}

int main() {
    int q;
    for (scanf("%d", &q); q--; solve());
}
