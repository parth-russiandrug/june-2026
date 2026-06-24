#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d", &n);
        int a[n];
        for(int j=0;j<n;j++){
            scanf("%d", &a[j]);
        }
        for(int k=0;k<n;k++) {
            for (int j = 0; j < n; j++) {
                if (j > k && a[j] > a[k]) {
                    a[j] = a[k];      //replace next big with previous small
                }
            }
        }
        int sum=0;
        for(int k=0;k<n;k++) {
            sum=sum+a[k];
        }
        printf("%d\n", sum );
    }
    return 0;
}