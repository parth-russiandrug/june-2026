#include <stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
      int n;
      scanf("%d", &n);
      int a[n];
      int h=0;
      for(int j=0;j<n;j++){
          scanf("%d", &a[j]);
          if(a[j]==1){
              h++;   //total 1
          }
      }
      int g=n-h;  //no. of -1
      int u=0;
      int c=0;
      if(h-g<0){
          u=g-h;
          c=u;
          if(u%2==0 && u!=0){
              u=u/2;
          }
          else if(u%2!=0) {
              u = u / 2;
              u++;
          }
      }
        if((g-u)%2!=0){     //g-u is total -1 after performing upper code
          u++;       //-1--->1 (only one)
      }
        printf("%d\n",u);
    }
    return 0;
}