#include <stdio.h>
//#include <string.h>
int main(){
    int t ;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        int x;
        int k;
        scanf("%d %d", &x, &k);
        int a[101]={0};    //array with all elements 0;
        int c=x;
        for(int j=x;j>0;j--){
            if(j%k!=0){
                a[x-j]=j;
                c=c-j;
                if(c==0){
                    break;
                }
            }
        }
        int b[x+1];
        for(int j=0; j<x+1;j++){
            if(a[j]==0){
                break;
            }
            printf("%d ",a[j]);     //why this is not working also this?
                                    //ans:because a[0]=0 scanf not change its value so loops break on first iteration.
        }
        printf("\n");
    }
    return 0;
}