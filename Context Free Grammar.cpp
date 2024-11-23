#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValidCFG5(const char *str, int start, int end) {
    if (start > end) return true; // e
    if (str[start] == '0' && str[end] == '0') 
        return isValidCFG5(str, start + 1, end - 1);
    for (int i = start; i <= end; i++) {
        if (str[i] != '1') return false;
    }
    return true;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isValidCFG5(str, 0, strlen(str) - 1)) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }
    return 0;
}

