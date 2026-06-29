#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d", &t);
    char a[t+1];
    for(int i=0;i<t;i++){
        scanf(" %c", &a[i]);     //the space before %c is crucial, without space first char store in string is "\n" newline
    }                            //this problem is not occur in array because array only take integer inputs
    a[t]='\0';
    int c=0;
    for(int i=1;i<t;i++){
        if(a[i-1]==a[i]){        //just count adjacent same element
            c++;
        }
    }
    printf("%d\n", c);
    return 0;
}