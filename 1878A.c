#include <stdio.h>
int main(){
    int t;
    if(scanf("%d", &t)!=1){return 0;}
    for (int i=0;i<t;i++){
        int n;
        int k;
        scanf("%d %d", &n,&k);
        int a[n];
        int m=0;
        for (int j=0;j<n;j++){
            int c;
            scanf("%d", &c);
            a[j]=c;
            if (k==a[j]){
                m++;
            }
        }
        if(m>0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}