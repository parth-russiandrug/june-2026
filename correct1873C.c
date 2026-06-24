#include <stdio.h>
#include <string.h>
int main(){
    int t;
    if(scanf("%d", &t)!=1){return 0;}
    for (int count=0;count<t;count++) {
        int sum=0;
        for(int i=1;i<11;i++){
            char a[12]; // Increased to 12 to safely hold 10 chars + null terminator
            scanf("%s", a);
            for(int j=0;j<10;j++){
                if(a[j]=='X'){
                    // 1. Move the 5-point center check to the VERY TOP
                    // Otherwise, the 4-point check blocks rows 5 and 6 from being evaluated correctly
                    if( i==5 && j==4){
                        sum=sum+5;
                    }else if( i==5 && j==5){
                        sum=sum+5;
                    }else if( i==6 && j==4){
                        sum=sum+5;
                    }else if( i==6 && j==5){
                        sum=sum+5;
                    }else if(i==1 || j==0 || j==9 || i==10){
                        sum =sum+1;
                    }else if(i==3 && j>1 && j<8){
                        sum =sum+3;
                    }else if(j==2 && i>2 && i<9){
                        sum =sum+3;
                    }else if(i==8 && j>1 && j<8){
                        sum =sum+3;
                    }else if(j==7 && i>2 && i<9){
                        sum =sum+3;
                    }else if(i==4 || i==7){ // Fixed typo: changed i==6 to i==7
                        if(j>2 && j<7){
                            sum=sum+4;
                        }else{
                            sum=sum+2; // Added missing fallback if column is outside the range
                        }
                    }else if(j==3 || j==6){
                        if(i>3 && i<8){
                            sum=sum+4;
                        }else{
                            sum=sum+2; // Added missing fallback if row is outside the range
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