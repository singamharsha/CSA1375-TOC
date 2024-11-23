#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValidCFG4(const char *str, int start, int end) {
    if (start > end) return true; // e
    if (str[start] == '0' && str[end] == '0') 
        return isValidCFG4(str, start + 1, end - 1);
    if (str[start] == '1' && str[end] == '1') 
        return isValidCFG4(str, start + 1, end - 1);
    return start == end && (str[start] == '0' || str[start] == '1');
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isValidCFG4(str, 0, strlen(str) - 1)) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }
    return 0;
}

