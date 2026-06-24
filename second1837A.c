#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int x;
        int k;
        scanf("%d %d", &x, &k);
        int a[101] = {0};
        int c = x;

        // CORRECTION 1: Use a dedicated index variable starting at 0.
        int index = 0;

        for(int j = x; j > 0; j--){
            if(j % k != 0){
                // CORRECTION 2: We go more right than the target in previous code and loop continues with storing negative numbers also.
                if (j <= c) {
                    a[index] = j;   //this is start with 0 no matter what is first entry of j
                    index++;
                    c = c - j;

                    if(c == 0){
                        break;
                    }
                }
            }
        }
        printf("%d\n", index);   //Print the total number of elements
        // CORRECTION 3: Loop up to the exact number of elements we actually added
        for(int j = 0; j < index; j++){
            printf("%d ", a[j]);
        }
        printf("\n");
    }
    return 0;
}