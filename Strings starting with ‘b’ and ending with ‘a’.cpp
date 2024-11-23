#include <stdio.h>
#include <string.h>

int isValidNFA9(const char *str) {
    int len = strlen(str);
    return len > 1 && str[0] == 'b' && str[len - 1] == 'a';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isValidNFA9(str)) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }
    return 0;
}

