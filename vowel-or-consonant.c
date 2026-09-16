//checking whether an alphabet is vowel or consonant
#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("the alphabet is vowel");
    }
    else {
        printf("the alphabet is consonant");
    }
    return 0;
    
}
