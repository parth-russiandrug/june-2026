#include <stdio.h>

int main () {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    for (int i = 0; i < t; i++) {
        int n, k;
        scanf("%d %d", &n, &k);
        int a[n];                       // if i write this before scanf then this is runtime err0r
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }

        int f = 0;
        for (int j = 1; j < n; j++) {
            if (a[j] < a[j-1]) {
                f++;
            }
        }
        // Added \n to fix the output matching issues
        if (k > 1) {
            printf("YES\n");
        }
        else if (k == 1 && f == 0) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}