//checking if the sum is odd or even 
#include<stdio.h>
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int sum = a + b;
    
    printf("sum of both number is %d\n", sum);
    
    if ( sum % 2 == 0) {
        printf("which is even number");
    }
    else if( sum % 2 != 0 ) {
        printf ("which is odd number");
    }
    return 0;
}
