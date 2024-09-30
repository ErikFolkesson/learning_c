#include <stdio.h>

void countBlankSpace() {
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

#define OUT 0
#define IN 1

void countWords() {
    int c, numNewLines, numWords, numChars;

    int state = OUT;
    numNewLines = numWords = numChars = 0;

    while ((c = getchar()) != EOF) {
        numChars++;
        if (c == '\n') {
            numNewLines++;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            numWords++;
        }
    }
    printf("Number of newlines: %d\n", numNewLines);
    printf("Number of words: %d\n", numWords);
    printf("Number of characters: %d\n", numChars);
}

int main(void) {
    countWords();
}
