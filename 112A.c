#include <stdio.h>
#include <string.h>
int main () {
    char a[101];
    char b[101];
    scanf("%s %s", a, b);
    int c = strlen(a);
    int h = 0;
    int g = 0;
    for (int i = 0; i < c; i++) {
        h = (int) a[i];
        g = (int) b[i];
        if (h == g || h == g - 32 || h - 32 == g) {
            continue;
        } else {
            break;
        }
    }
    if ( (h > 91 && g > 91) || (h < 91 && g < 91) ){
        if (h == g) {
            printf("0");
        } else if (h > g) {
            printf("1");
        } else {
            printf("-1");
        }
    } else {
        if (h > 91 && g < 91) {
            g = g + 32;
            if (h == g) {
                printf("0");
            } else if (h > g) {
                printf("1");
            } else {
                printf("-1");
            }
        } else if(h < 91 && g > 91) {
            h = h + 32;
            if (h == g) {
                printf("0");
            } else if (h > g) {
                printf("1");
            } else {
                printf("-1");
            }
        }
    }
    return 0;
}
