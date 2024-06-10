#include <stdio.h>

int main() {
    int count = 1;
    int i = 25;
    do {
        int j = 0;
        while (j < count && i - j >= 0) {
            printf("%c", 'a' + i - j);
            if (j < count - 1) {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i -= count;
        count++;
    } while (i >= 0);
    printf("Finish\n");
    return 0;
}
