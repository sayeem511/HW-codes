//calculating average of two ineteger and printing as float-point value
#include<stdio.h>
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    float avrg = (float) (a + b)/2;
    printf("avarage is : %.1f", avrg);
    return 0;
}
