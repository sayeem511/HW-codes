//checking if a number is positive or negative
#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    
    if(num > 0) {
    printf("it is a positive number");
    }
    else if(num < 0) {
    printf("it is a negative number");
    }
    else if(num == 0) {
    printf("it's neither positive nor negative, it's zero");
    }
    
    return 0;
    
}
