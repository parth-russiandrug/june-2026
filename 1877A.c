#include <stdio.h>
int main(){
    int t;
    if (scanf("%d", &t)!=1){return 0;}
    for(int i=0;i<t;i++){
        int n;
        scanf("%d", &n);
        int a[n-1];
        int sum=0;
        for(int j=0;j<n-1;j++){
            int c;
            scanf("%d", &c);
            a[j]=c;
            sum=sum+c;
        }
        printf("%d\n", (-1)*sum);
    }
    return 0;
}