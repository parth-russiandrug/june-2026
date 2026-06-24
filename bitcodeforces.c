#include <stdio.h>
#include <string.h>
int main(){
    int x=0;
    int n=0;
    scanf("%d", &n);
    char m[]="++X";
    char y[]="X++";

    for(int i=0;i<n;i++){
        int c;
        char a[4];
        scanf("%3s", a);
        if (strcmp(m,a) == 0 || strcmp(y,a) == 0){
            x=x+1;
        }else{
            x=x-1;
        }
    }
    printf("%d", x);
    return 0;
}