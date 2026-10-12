#include <stdio.h>

int main(void) {
    char n;
    char vowel[] = {'a', 'e', 'i', 'o', 'u'};
    scanf("%c", &n);

    for( int i = 0; i < 5; i ++) {
        if( n == vowel[i] ) {
            printf("vowel"); }

    else {
        printf ("consonant"); }
    break;
    }
    return 0;
}
