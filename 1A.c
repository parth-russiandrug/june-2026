#include <stdio.h>

int main() {
    long long n, m, a;
    if (scanf("%lld %lld %lld", &n, &m, &a) != 3) {
        return 0;
    }
    long long x=n/a;
    long long y=m/a;
    if(n%a!=0){
      x=x+1;
    }
    if(m%a!=0){
        y=y+1;
    }
    long long c=x*y;
    printf("%lld", c);
return 0;
}