#include <stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    for (int i=0;i<t;i++){
        int x;
        scanf("%d", &x);
        int a[x];
        int m=0;
        int n=0;
        int p=0;
        for (int j=0;j<x;j++){
            scanf("%d", &a[j]);
            if (a[j]==0){
                m=m+1;
            }else if(a[j]==1){
                n=n+1;
            }else{
                p=p+1;
            }
        }
        if (p==0){
            printf("%d\n", n/3+m);
        }
        else if(n==0){
                printf("%d\n", p/3+m);
        }
        else if(p!=0 && n!=0){
            if (p>n){
                printf("%d\n", (p-n)/3+n+m);
            }
            else if (n>p){
                printf("%d\n", (n-p)/3+p+m);
            }
            else if (n==p){
                printf("%d\n", p+m);
            }
        }
        else{
            printf("%d\n", m);
        }
    }
    return 0;
}