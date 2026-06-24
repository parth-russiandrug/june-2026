// 12 24 32 44
#include <stdio.h>
#include <string.h>

void removeCharacter(char *str, char garbage) {
    int i = 0;
    int j = 0;
    while (str[i] != '\0') {
        if (str[i] != garbage) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
}

int main(){
    int t;
    if (scanf("%d", &t) != 1) {return 0;}
    for (int i=0;i<t;i++){
        char a[300005];
        scanf("%s", a);
        int d = strlen(a);
        int c=0;
        for (int j=0;j<d;j++) {
            if (a[j] == '4') {
                c++;
            }
        }
        removeCharacter(a, '4');
        d=strlen(a);

        int count_13 = 0;
        int count_2 = 0;

        for (int j=0;j<d;j++){  //samjho pehle idhar
            if (a[j] == '1' || a[j] == '3') {
                count_13++;
            }
            if (a[j] == '2') {
                count_2++;

                if (count_13 > 0) {
                    if (count_13 < count_2) {
                        c += count_13;
                        count_13 = 0;
                    } else {
                        c += 1;
                        count_2--;
                    }
                }
            }
        }
        printf("%d\n", c);
    }
    return 0;
}