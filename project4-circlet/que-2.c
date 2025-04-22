#include <stdio.h>

int main() {
    int i, j;
    int num = 11;  // Starting number

    for (i = 1; i <= 4; i++) {        // Outer loop for rows
        for (j = 1; j <= i; j++) {    // Inner loop for columns
            printf("%d ", num);
            num++;                    // Increase number for next print
        }
        printf("\n");                
    }

    return 0;
}
