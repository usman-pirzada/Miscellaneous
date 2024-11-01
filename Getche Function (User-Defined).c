#include <stdio.h>

char getche() {
    char ch;
    ch = getchar(); // Read a character
    printf("%c", ch); // Show it on the screen
    return ch; // Return the character
}

int main() {
    char ch;
    printf("Enter a character: ");
    ch = getche(); // Use the custom function
    printf("\nYou entered: %c\n", ch);
    return 0;
}
