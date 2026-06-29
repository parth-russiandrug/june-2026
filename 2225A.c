#include <stdio.h>
int main  (){
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        long long x;
        long long y;
        scanf("%lld %lld", &x, &y);
        if(y>2*x){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}