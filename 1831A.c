#include <stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d", &n);
        int a[n];
        for(int j=0;j<n;j++){
            scanf("%d", &a[j]);
        }
        int f=n+1;
        int b[n];
        for(int j=0;j<n;j++){
            b[j]=f-a[j];
            printf("%d ", b[j]);
        }
        printf("\n");
    }


    return 0;
}