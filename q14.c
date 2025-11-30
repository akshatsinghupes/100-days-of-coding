#include <stdio.h>
#include <ctype.h> // Required for toupper() function

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf(" %c", &ch); // Note the space before %c to consume any leftover newline character

    // Convert the character to uppercase to simplify vowel checking
    ch = toupper(ch);

    // Check if the character is an alphabet
    if (ch >= 'A' && ch <= 'Z') {
        // Check if the character is a vowel
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("'%c' is a Vowel.\n", ch);
        } else {
            printf("'%c' is a Consonant.\n", ch);
        }
    } else {
        printf("'%c' is not an alphabet.\n", ch);
    }

    return 0;
}
