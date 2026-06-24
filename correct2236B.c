#include <stdio.h>
#include <string.h>
int main (){                    //this is also not correct 
    int t;
    if(scanf("%d", &t)!=1){return 0;}
    for (int i=0;i<t;i++){
        int n;
        int k;
        scanf("%d %d", &n, &k);
        char a[n+1];
        scanf("%s", a);
        int g=0;
        for (int j=0;j<n;j++){
            if(a[j]=='0'){
                g++;
            }
        }
        int p=0;
        for (int j=n-k+1;j<n;j++){
            if(a[j]=='1'){
                p++;
            }
        }

        if(g==0){
            printf("NO\n");
        }
        else if(p>0){
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }
    return 0;
    }