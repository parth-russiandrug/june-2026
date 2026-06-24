#include <stdio.h>

int find_max(int a[], int n) {
    int max_val = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > max_val) {
            max_val = a[i];
        }
    }
    return max_val;
}

int main (){
    int t;
    if (scanf("%d",&t)!=1){return 0;}

    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int a[n],b[n];
        for(int j=0;j<n;j++){
            int c;
            scanf("%d",&c);
            a[j]=c;
        }
        for(int j=0;j<n;j++){
            int c;
            scanf("%d",&c);
            b[j]=c;
        }
        int final[n];
        for(int j=0;j<n;j++){
            int temp;
            temp=a[j];
            a[j]=b[j];
            b[j]=temp;

           int d = find_max(a,n);
           int sum;
           for (int k=0;k<n;k++){
               sum= b[k] + sum;
           }
           int f = sum + d;
           final[j] = f;
            temp = a[j];
            a[j] = b[j];
            b[j] = temp;
        }
            int ans = find_max(final,n);
            printf("%d\n", ans);
    }
}