#include <stdio.h>
#include <string.h>
int main(){
    int t;
    if(scanf("%d", &t)!=1){return 0;}
    for (int count=0;count<t;count++) {
        int sum=0;
        for(int i=1;i<11;i++){
            char a[12];
            scanf("%s", a);
            for(int j=0;j<10;j++){
                if(a[j]=='X'){
                    if(i==1 || j==0 || j==9 || i==10){
                        sum =sum+1;
                    }else if(i==3 && j>1 && j<8){
                        sum =sum+3;
                    }else if(j==2 && i>2 && i<9){
                        sum =sum+3;
                    }else if(i==8 && j>1 && j<8){
                        sum =sum+3;
                    }else if(j==7 && i>2 && i<9){
                        sum =sum+3;
                    }else if( i==5 && j==4){
                        sum=sum+5;
                    }else if( i==5 && j==5){
                        sum=sum+5;
                    }else if( i==6 && j==4){
                        sum=sum+5;
                    }else if( i==6 && j==5){
                        sum=sum+5;
                    }else if(i==4 || i==6){
                        if(j>2 && j<7){
                            sum=sum+4;
                        }
                    }else if(j==3 || j==6){
                        if(i>3 && i<8){
                            sum=sum+4;
                        }
                    }else{
                        sum=sum+2;
                    }
                }
            }
        }
            printf("%d\n", sum);
    }
        return  0;
    }