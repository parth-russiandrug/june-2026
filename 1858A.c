#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int z=0;z<t;z++){
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        if (c%2==0){
            if(a>b){
                printf("First\n");
            }else if(b>a){
                printf("Second\n");
            }else{
                printf("Second\n");
            }
        }
        else if(c%2 != 0){
            if(a>b){
                printf("First\n");
            }else if(b>a){
                printf("Second\n");
            }else{
                printf("First\n");
            }
        }
    }


    return 0;
}