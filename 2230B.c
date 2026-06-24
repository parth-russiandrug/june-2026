// 12 24 32 44
#include <stdio.h>
#include  <string.h>
void removeCharacter(char *str, char garbage) { //remove characters from string function
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
            if (a[j] == '4') { //string not array '' this is necessary
                c++;
            }
        }
        removeCharacter(a, '4');
        d=strlen(a);
        for (int j=0;j<d;j++){
        if (a[j]=='2' && j>0){
               if (a[j-1]=='1' || a[j-1]=='3'){
                   c++;
               }
            }
        }
        printf("%d\n", c);
    }
    return 0;
}