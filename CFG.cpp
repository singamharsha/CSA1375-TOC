#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValidCFG3(const char *str) {
    int len = strlen(str);
    if (len < 2 || str[0] != '0' || str[len - 1] != '1') return false;
    for (int i = 1; i < len - 1; i++) {
        if (str[i] != '0' && str[i] != '1') return false;
    }
    return true;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isValidCFG3(str)) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }
    return 0;
}

