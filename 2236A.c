#include <stdio.h>

int main(){
    int t;
    if(scanf("%d", &t)!=1){return 0;}
    for (int i=0;i<t;i++){
        int n;
        scanf("%d", &n);
        int a[n];
        for(int j=0;j<n;j++){
            int c;
            scanf("%d", &c);
            a[j]=c;
        }
        int max=a[0];
        int min=a[0];
        for(int j=1;j<n;j++){
            if (max<a[j]){
                max=a[j];
            }
        }
        for(int j=1;j<n;j++){
            if (min>a[j]){
                min=a[j];
            }
        }
        int d= max+1-min;
        printf("%d\n", d);
    }
    return 0;
}