// Make sure the function reverse actually reverses the string
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* reverse(const char* str) {
    int size = strlen(str);
    char* rev = (char*)malloc((size + 1) * sizeof(char)); // Allocate memory for the reversed string
    if (rev == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    for (int i = 0; i < size; i++) {
        rev[i] = str[size - i - 1]; // Reversing the string
    }
    rev[size] = '\0'; // Null terminator
    return rev;
}

int main() {
    const char* str = "Forward"; // Using const char* for string literal
    char* reversed = reverse(str);
    printf("%s\n", reversed);
    free(reversed); // Free allocated memory
    return 0;
}
