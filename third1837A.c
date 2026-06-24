#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int x;
        int k;
        scanf("%d %d", &x, &k);
        // If x is not a multiple of k, we only need 1 jump!
        if (x % k != 0) {
            printf("1\n");
            printf("%d\n", x);
        }
        // If x IS a multiple of k, we can always do it in exactly 2 jumps
        else {
            printf("2\n");
            printf("%d 1\n", x - 1);
        }
    }
    return 0;
}

//This problem is actually very easy to solve. The logic isn't tough,
//but I made it unnecessarily complicated in my previous codes. Only two outcomes are possible.
