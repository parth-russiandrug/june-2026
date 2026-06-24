#include <stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    for (int i=0;i<t;i++){
     int n;
        scanf("%d", &n);
     int a[n];
     int d=0;
        for (int i=0;i<n;i++){
            scanf("%d", &a[i]);}
        for (int i=0;i<n-1;i++){
            if(a[i]==1){
                d+=1;
            }}

     int c=a[n-1];
     int sum=0;
        for (int i=0;i<n-1;i++){
           sum=sum+a[i];
        }
        sum=sum-d;
        sum=sum+c;
        printf("%d\n", sum);
    }
    return 0;
}