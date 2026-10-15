#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 1;

    printf("Enter a sentence: ");
    getchar(); // Clear input buffer
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != '\n' && str[i+1] != '\0') {
            count++;
        }
    }

    printf("Total words in the sentence = %d\n", count);
    return 0;
}