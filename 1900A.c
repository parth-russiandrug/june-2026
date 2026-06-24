#include <stdio.h>
#include <string.h>
int main(){
    int t;
    if (scanf("%d", &t) != 1) return 0;
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        char a[n];
        int g=0;
        scanf("%s",a);
        for(int j=0;j<n;j++) {
            if (a[j] == '.') {
                g++;
            }
        }
        int r=0;
        for (int j=2;j<n;j++){
        if(a[j]=='.' && a[j-1]=='.' && a[j-2]=='.'){
            r++;
        }
        }
        if (r>0){
            printf("2\n");
        }else{
            printf("%d\n", g);
        }
    }
    return 0;
}