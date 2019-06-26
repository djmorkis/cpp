#include <stdio.h>

void solve() {
    long long k, n, a, b;
    scanf("%lld %lld %lld %lld", &k, &n, &a, &b);
    long long l = 0;
    long long r = n + 1;
    while (l < r) {
        long long mid = l + (r - l) / 2;
        if (k - mid * a >= 0) {
            int cnt_b = (k - mid * a) / b - ((k - mid * a) % b == 0);
            if (cnt_b + mid >= n) 
                l = mid + 1;
            else
                r = mid;
        } 
        else 
            r = mid;

    }
    printf("%lld\n", l - 1);
}

int main() {
    int q;
    for (scanf("%d", &q); q--; solve());
}
