#include <stdio.h>
#include <string.h>
int main(){
    char s[1001];
    scanf("%s", s);
    int a= (int)s[0];
    if(a>91){
        a=a-32;
    }
    s[0]=(char)a;
    printf("%s\n", s);
    return 0;
}
