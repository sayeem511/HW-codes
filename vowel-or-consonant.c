//checking whether an alphabate is vowel or consonant
#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("the alphabate is vowel");
    }
    else {
        printf("the alphabate is consonant");
    }
    return 0;
    
}
