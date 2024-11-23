#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValidCFG20(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'b') return false;
    }
    return true;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isValidCFG20(str)) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }
    return 0;
}

