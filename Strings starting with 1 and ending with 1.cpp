#include <stdio.h>
#include <string.h>

int isValidNFA10(const char *str) {
    int len = strlen(str);
    return len > 1 && str[0] == '1' && str[len - 1] == '1';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isValidNFA10(str)) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }
    return 0;
}

