#include <stdio.h>
int main(){
   int t;
   scanf("%d",&t);
   for(int i=0;i<t;i++) {
       int n;
       scanf("%d", &n);
       int a[n];
       for (int j = 0; j < n; j++) {
           int r;
           scanf("%d", &r);     //mistake in previous code not present
           a[j] = r;
       }
       int b[n - 1];
       for (int j = 1; j < n; j++) {
           int c = 0;
           c = a[j] - a[j - 1];
           b[j - 1] = c;
       }
       int min2 = b[1];
       int min = b[0];
       for (int j = 1; j < n - 1; j++) {
           if (min2 > b[j]) {
               min2 = b[j];
           }
           if (min > b[j]) {
               min = b[j];
           }
       }
       int p=0;
       for (int j = 0; j < n-1; j++) {
           if (b[j] >= 0){
               p++;
           }}
       if(p==n-1){
                   printf("%d\n", min / 2 + 1);
       }else{
           printf("0\n");
       }
   }
   return 0;
}