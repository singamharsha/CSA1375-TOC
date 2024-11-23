#include <stdio.h>
#include <string.h>

int isValidDFA(const char *str) {
    int len = strlen(str);
    if (len > 0 && str[0] == 'a' && str[len - 1] == 'a') {
        return 1; 
    }
    return 0; 
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isValidDFA(str)) {
        printf("String is accepted by the DFA.\n");
    } else {
        printf("String is rejected by the DFA.\n");
    }

    return 0;
}

