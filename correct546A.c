#include <stdio.h>
int main(){
    long long k;
    long long n;
    long long w;
    scanf("%lld %lld %lld", &k,&n,&w);
    long long total=0;
    for(int i=1;i<w+1;i++){
        total=total+(k*i);
    }
    //in previous code i think total is always greater than n but this is not mention in question
    if (total > n) {
        printf("%lld\n", total - n);
    } else {
        printf("0\n");
    }
    return 0;
}