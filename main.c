#include <stdio.h>

char letter;

int main() {
    for (letter = 'a'; letter <= 'z'; letter++) {  // loop over the letters of the alphabet
        putchar(letter);  // output the current letter
    }
    putchar('\n');
    return 0;
}
