#include <stdio.h>
int main (){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++){
            int h;
            scanf("%d", &h);
            a[j]=h;
        }
        int x=a[0];
        int sum=0;
        for(int j=1;j<n;j++){
            sum= sum+a[j];
        }
        if( (sum%2!=0 && x%2==0) || (sum%2==0 && x%2!=0) )
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}