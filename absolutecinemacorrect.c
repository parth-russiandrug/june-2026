#include <stdio.h>

long long max(long long x, long long y) {
    if (x > y) {
        return x;
    }
    return y;
}

int main () {
    int t;
    if (scanf("%d", &t) != 1) { return 0; }

    for(int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        long long a[n], b[n];    //it is possible the values are greater than 2*10^9;
        for(int j = 0; j < n; j++) {
            long long c;
            scanf("%lld", &c);
            a[j] = c;
        }
        for(int j = 0; j < n; j++) {
            long long c;
            scanf("%lld", &c);
            b[j] = c;
        }
        long long total = 0;
        for(int j = 0; j < n; j++) {
            total = total + max(a[j], b[j]);
        }

        long long ans = 0;

        for(int j = 0; j < n; j++) {

            long long score_a = a[j] + (total - max(a[j], b[j]) + b[j]);
            ans = max(ans, score_a);

            long long score_b = b[j] + (total - max(a[j], b[j]) + a[j]);
            ans = max(ans, score_b);
        }

        printf("%lld\n", ans);
    }
    return 0;
}