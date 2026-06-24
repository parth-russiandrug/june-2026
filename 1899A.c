#include <stdio.h>
int main(){
    int t;
    if (scanf("%d", &t) != 1) return 0;
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        if (n%3==0){
            printf("Second");
        }else{
            printf("First");
        }
    }
    return 0;

}