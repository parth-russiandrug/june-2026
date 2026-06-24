#include <stdio.h>
int  main (){
    int t;
    if(scanf("%d", &t)!=1){return 0;}
    for (int i=0; i<t;i++){
        int n;
        scanf("%d", &n);
        int x;
        scanf("%d", &x);
        int a[n];
        for (int j=0; j<n;j++){
            scanf("%d", &a[j]);
        }
        int c=0;
        int g[n-1];
        for (int j=1; j<n;j++){
            g[j-1]=a[j]-a[j-1];
        }
        for (int j=1; j<n;j++) {
            if (c<g[j-1]){
                c=g[j-1];
            }
        }
        int h=x-a[n-1];
        if (c>=2*h && c>=a[0]){         //=(is equal) plays very imp role here in next times remember this in if else conditions
            printf("%d\n", c);
        }
        else if (2*h>=c && 2*h>=a[0]){
            printf("%d\n", 2*h);
        }
        else{
            printf("%d\n", a[0]);
        }
    }
    return 0;
}