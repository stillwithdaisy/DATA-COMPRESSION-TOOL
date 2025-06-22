#include <stdio.h>
#include <string.h>

void runLengthEncode(char *input) {
    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        int count = 1;
        // Count occurrences of the same character
        while (i < len - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }
        printf("%c  %d", input[i], count);
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", &str);

    printf("Encoded string: ");
    runLengthEncode(str);

    return 0;
}