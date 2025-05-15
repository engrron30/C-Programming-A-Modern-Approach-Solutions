#include <stdio.h>
#include <stdbool.h>

#define DEBUG 0

bool isOneDigit(int d1, int d2, int d3) {
    bool rv = false;

    if (d1 > 9 || d2 > 9 || d3 > 9)
        goto exit;
    if (d1 < 0 || d2 < 0 || d3 < 0)
        goto exit;

    rv = true;
exit:
    return rv;

}

int main() {
    int d1, d2, d3; 
    printf("Enter a two digit number: ");
    int ret = scanf("%d%d%d", &d1, &d2, &d3);

    if (ret != 3) {
        perror("Error encountered in scanf.\n");
        goto exit;
    } else if (!isOneDigit(d1, d2, d3)) {
        printf("Digit entered is invalid.\n");
        goto exit;
    }

    int new = d1 + (d2 * 10) + (d3 * 100);
    printf("The reversal is %d.\n", new);

exit:
    return 0;
}
