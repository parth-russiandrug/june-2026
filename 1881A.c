#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        char x[100], s[100];
        scanf("%s", x);
        scanf("%s", s);

        char *p = malloc(strlen(x) + 1);
        strcpy(p, x);

        int ops;
        int found = 0;

        // Check if s already a substring
        if (strstr(p, s) != NULL) {
            found = 1;
            ops = 0;
        } else {
            // Try up to 20 operations (enough because n*m <= 25)
            for (ops = 1; ops <= 20; ops++) {
                int len = strlen(p);
                p = realloc(p, 2 * len + 1);
                // Manual copy including null terminator
                for (int i = 0; i <= len; i++) {
                    p[len + i] = p[i];
                }
                if (strstr(p, s) != NULL) {
                    found = 1;
                    break;
                }
            }
        }

        if (found)
            printf("%d\n", ops);
        //else
            //printf("-1\n");

        free(p);
    }
    return 0;
}