#include <stdio.h>

int main() {
    int i, j, k;
    for (i = 1; i < 5; i++) {
        for (j = 1; j < 5; j++) {
            if (i == j) {
                continue;
            }
            for (k = 1; k < 5; k++) {
                if (k == i || k ==j) {
                    continue;
                }
                printf("%d%d%d\t", i, j, k);
            }
        }
    }
    return 0;
}
