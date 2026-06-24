#include <stdio.h>
#include <string.h>
int main (){
    int t;
    if(scanf("%d", &t)!=1){return 0;}
    for (int i=0;i<t;i++){
        int n,k;
        scanf("%d %d", &n, &k);
       char a[n+1];
       scanf("%s", a);
       int c=0;
       for(int j=0;j<n;j++){
           if(a[j]=='0'){
               c++;
           }
       }
       if(c!=0){
           printf("YES\n");
       }else{
           printf("NO\n");
       }
    }
    return 0;
}