#include <stdio.h>
#include <stdlib.h>
int main(){
    int d,e;
    int a[4][4];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int c;
            scanf("%d", &c);
          a[i][j]=c;
          if (a[i][j]==1){
             d=i;
             e=j;
          }
        }
    }
    int f= abs(d-2) + abs(e-2);
    printf("%d", f);
    return 0;
}