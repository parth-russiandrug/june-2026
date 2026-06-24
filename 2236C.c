#include <stdio.h>
int main(){
    int t;
    if(scanf("%d", &t)!=1){return 0;}
    for(int i=0;i<t;i++) {
        int a;
        int b;
        int x;
        int h=0;
        scanf("%d %d %d", &a, &b, &x);
        if(a==b){
        printf("0");
        }else if (a-b==1 ||b-a==1){
            printf("1");
        }else if(a==0 && b<x) {
            printf("1");
        }else if(b==0 && a<x) {
            printf("1");
        }else if(a<x && b<x){
            printf("2");
        }else if(a==1||b==1){
            if(a==1 && b==x){
                printf("1");
            }else if(b==1 && x==a){
                printf("1");
            }else if(a==1 && b<x){
                printf("2");
            }else if(b==1 && a<x){
                printf("2");
            }
        }
        else if(a<=x && b<=x){
            printf("3");
        }else if(a>=x && b<=x){
            int g = a/x;
            for(int j=0;j<a;j++) {
                h++;
                if (g < x)
                    break;
            }if(g==b){
                printf("%d", h);
            }else if (g-b==1 ||b-g==1){
                printf("%d",h+1);
            }else if(g==0 && b<x) {
                printf("%d",h+1);
            }else if(b==0 && g<x){
                printf("%d",h+1);
            }else if(g<x && b<x){
                printf("%d", h+2);
            }else if(g==1||b==1){
                if(g==1 && b==x){
                    printf("%d",h+1);
                }else if(b==1 && x==g){
                    printf("%d",h+1);
                }else if(g==1 && b<x){
                    printf("%d", h+2);
                }else if(b==1 && g<x){
                    printf("%d", h+2);
                }
            }
        }else if(b>=x && a<=x){
            int g = b/x;
            for(int j=0;j<b;j++) {
                h++;
                if (g < x)
                    break;
            }if(g==a){
                printf("%d", h);
            }else if (g-a==1 ||a-g==1){
                printf("%d",h+1);
            }else if(g==0 && a<x) {
                printf("%d",h+1);
            }else if(a==0 && g<x){
                printf("%d",h+1);
            }else if(g<x && a<x){
                printf("%d", h+2);
            }else if(g==1||a==1){
                if(g==1 && a==x){
                    printf("%d",h+1);
                }else if(a==1 && x==g){
                    printf("%d",h+1);
                }else if(g==1 && a<x){
                    printf("%d", h+2);
                }else if(a==1 && g<x){
                    printf("%d", h+2);
                }
            }
        }
    }
    return 0;
}