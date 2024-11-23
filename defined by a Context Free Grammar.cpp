#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValidCFG6(const char *str, int start, int end) {
    if (start > end) return true; // e
    return str[start] == '0' && str[end] == '1' && isValidCFG6(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isValidCFG6(str, 0, strlen(str) - 1)) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }
    return 0;
}

