#include <stdio.h>

void eClosure(int state, int n, int transitions[n][n], int visited[n]) {
    visited[state] = 1;
    for (int i = 0; i < n; i++) {
        if (transitions[state][i] == -1 && !visited[i]) { // -1 indicates e-transition
            eClosure(i, n, transitions, visited);
        }
    }
}

int main() {
    int n = 3; // Example: 3 states
    int transitions[3][3] = {{-1, 1, -1}, {-1, -1, 2}, {-1, -1, -1}};
    int visited[3] = {0};

    printf("e-closure of each state:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) visited[j] = 0;
        eClosure(i, n, transitions, visited);
        printf("State %d: ", i);
        for (int j = 0; j < n; j++) if (visited[j]) printf("%d ", j);
        printf("\n");
    }

    return 0;
}

