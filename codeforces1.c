#include <stdio.h>

int main() {
    int t=6;
    int x, y;

    if (t > 0 && t < 101) {
        for (int i = 0; i < t; i++) {
            scanf("%d %d", &x, &y);

            if (x % 2 != 0 && y % 2 != 0) {
                printf("NO\n");
            }
            else {
                printf("YES\n");
            }
        }
    }
    else {
        printf("Invalid input\n");
    }

    return 0;
}