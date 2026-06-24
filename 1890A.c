#include <stdio.h>
int main(){
    int t;
    if (scanf("%d", &t) != 1) return 0;
    for (int k = 0; k < t; k++){
       int n;
        scanf("%d", &n);
        int a[n];
        for (int j=0;j<n;j++){
            int c;
            scanf("%d", &c);
            a[j]=c;
        }
        int f=0;
        for (int i = 0; i < n; i++) {           //FIND UNIQUE ELEMENTS IN ARRAY
            int isDuplicate = 0;

            for (int j = 0; j < i; j++) {
                if (a[i] == a[j]) {
                    isDuplicate = 1;
                    break;
                }
            }
            if (!isDuplicate) {
               f++;
            }
        }
        if (f>2){
            printf("NO\n");
        }
        else{
            int first_element = a[0];
            int second_element = first_element;   //genius move
            int found_second = 0;

            for (int i = 1; i < n; i++) {
                if (a[i] != first_element) {
                    second_element = a[i];
                    found_second = 1;
                    break;
                }
            }


            int count_first = 0;
            int count_second = 0;

            for (int i = 0; i < n; i++) {
                if (a[i] == first_element) {
                    count_first++;
                } else if (a[i] == second_element) {
                    count_second++;
                }
            }
            if (count_first==count_second || count_first==count_second-1 || count_first-1==count_second || second_element == first_element ){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }
            return 0;
}