//logic is correct of this code
//but timelimit exceeded
#include <stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d", &n);
        long long a[n];           //the values of a is smaller than 10^9 but i'm not create new or copy array,
        for(int k=0;k<n;k++){     // i make changes directly in original one so i need long long because in further code
            scanf("%lld", &a[k]); //the values might be greater then 2*10^9.
        }
        for(int k=0;k<n/2;k++){
            for(int j=0;j<n-1;j++){
                if(a[j]>a[j+1]){
                    long long temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp + a[j+1];
                }
            }
        }
        long long max = a[0];
        for(int k=1;k<n;k++){
            if(max<a[k]){}
            max=a[k];
        }
        printf("%lld\n", max);
    }
    return 0;
}