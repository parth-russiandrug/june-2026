#include <stdio.h>
int main (){
    int n;
    if (scanf("%d",&n)!=1){return 0;}
    int c=0;
    for (int i=0;i<n;i++){
        int b=0;
      for(int j=0;j<3;j++){
          int a;
          scanf("%d",&a);
          if(a==1){
              b=b+1; //why b=++b is not allowed
          }else{
              b=b;
          }
      }
      if(b>1){
         c=c+1;
      }
    }
    printf("%d\n", c);
    return 0;
}