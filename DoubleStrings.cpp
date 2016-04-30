#include<stdio.h>
int main() {
    int testcases;
    int num;
 
    scanf("%d", &testcases);
    while(testcases) {
        scanf("%d", &num);
        if(num % 2 == 0) {
            printf("%d", num);
        }
        else {
            printf("%d", num -1);
        }
        printf("\n");
        testcases--;
    }
    return 0;
} 
