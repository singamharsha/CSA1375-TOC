#include <stdio.h>
#include <string.h>

int isValidDFA13(const char *str) {
    int len = strlen(str);
    return len > 1 && str[0] == 'a' && str[len - 1] == 'b';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isValidDFA13(str)) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }
    return 0;
}

