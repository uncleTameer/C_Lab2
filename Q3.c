#include <stdio.h>

int main() {
    int count = 1;
    for (int i = 25; i >= 0; i -= count) {
        for (int j = 0; j < count; j++) {
            if (i - j >= 0) {
                printf("%c ", 'a' + i - j);
            }
        }
        printf("\n");
        count++;
    }
    printf("Finish\n");
    return 0;
}
