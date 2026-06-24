#include <stdio.h>
int main() {
    int a;       //1 3 9 27 81 243 729   smallest
                //10 20 40 80 160 320 640 largest
                // takes 6 years
    int b;
    int c=0;
    scanf("%d %d", &a,&b);
    for (int i=0;i<6;i++){
        if(a<=b){
            c++;
            a=3*a;
            b=2*b;
        }
    }
    printf("%d\n", c);
    return 0;
}