#include <stdio.h>
#include <string.h>
int main (){
    char s[101];
    scanf("%s", s);
    int l = strlen(s);
    int a=0;
    int b=0;
    for(int i=0;i<l;i++) {
        int d = (int) s[i];
        if (d > 91) {
            a++;
        } else {
            b++;
        }
    }
    for(int i=0;i<l;i++) {
        if (a >= b) {
            int d = (int) s[i];
            if (d < 91) {
                d = d + 32;
            }
            s[i] = (char) d;
        } else {
            int d = (int) s[i];
            if (d > 91) {
                d = d - 32;
            }
            s[i] = (char) d;
        }
    }
    printf("%s\n", s);
    return 0;
}