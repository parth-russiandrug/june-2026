#include <stdio.h>
#include <string.h>
int main(){
    char a[101];
    scanf("%s", a);
    int n=strlen(a);
    char s[n+1];
    int c=0;
    for (int i=0; i<n; i++){
        s[i]=a[i];
        for(int j=0;j<i;j++){
            if(s[j]==a[i]){
            s[i]='1';
            }
        }
    }
    s[n]='\0';
    int u=0;
    for(int j=0;j<n;j++){
        if(s[j]=='1'){
            u++;
        }
    }
    int g= strlen(s)-u;
    if(g%2==0){
        printf("CHAT WITH HER!\n");
    }else{
        printf("IGNORE HIM!\n");
    }
    return 0;
}