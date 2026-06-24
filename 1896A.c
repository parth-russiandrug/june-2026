#include <stdio.h>
int  main () {
    int t;
    if (scanf("%d", &t) != 1) { return 0; }
    for (int i = 0; i < t; i++) {
    int n;
        scanf("%d", &n);
        int a[n];
     for (int j=0;j<n;j++){
         int c;
         scanf("%d", &c);
         a[j]=c;
     }
      int h=a[0];
     int g=0;
        for (int j=1;j<n;j++){
            if (h>a[j]){
                g++;
            }
        }
        int k=0;
        for (int j=1;j<n;j++){
            if(a[j]<a[j-1]){
                k++;
            }
        }
        if (g==0){
            printf("YES\n");}
                                                //else if(k==n-1){
                                                //printf("YES\n");
                                                // }
        else{
            printf("NO\n");
        };
    }

    return 0;
}