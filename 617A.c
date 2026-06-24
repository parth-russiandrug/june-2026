#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int c=x/5;
    if(x%5!=0){
        c=c+1;
    }
    printf("%d\n", c);
    return 0;
}
