#include <stdio.h>

int main(void) {
    int c;

    int numBlankspace = 0;

    printf("EOF = %d\n", EOF);

    while ((c = getchar()) != EOF) {
        if(c == ' ') {
            numBlankspace++;
        }
    }
    printf("Number of blankspace: %d", numBlankspace);
}
