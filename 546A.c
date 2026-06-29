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
     printf("%lld\n", total-n);
    return 0;
}

