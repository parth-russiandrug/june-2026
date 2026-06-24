#include <stdio.h>
#include <string.h>
int main(){
    char s[200];
    scanf("%s", s);
    int a=strlen(s);
    int b=0,n=0,m=0;
    for (int i=0;i<200;i++){
        if(s[i]=='\0'){
            break;
        }
        if(s[i]=='1'){
            b++;
        }else if( s[i]=='2'){
            n++;
        }else if(s[i]=='3'){
            m++;
        }
    }
    int h=b;
    int j=n;
    int k=m;
    for(int i=0;i<b;i++){
        h--;
        if(h==0 && n==0 && m==0){
            printf("1");
            break;
        }
        printf("1+");
    }
    for(int i=0;i<n;i++){
        j--;
        if(j==0 && m==0){
            printf("2");
            break;
        }
        printf("2+");
    }
    for(int i=0;i<m;i++){
        k--;
        if(k==0){
            printf("3");
            break;
        }
        printf("3+");
    }
    printf("\n");
    return 0;
}