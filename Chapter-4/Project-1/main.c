#include <stdio.h>

int main() {
    int two_dig, ret; 
    printf("Enter a two digit number: ");
    ret = scanf("%d", &two_dig);

    if (!ret) {
        perror("Error encountered in scanf.\n");
        goto exit;
    } else if (two_dig < 10 || two_dig > 99) {
        printf("Number is not a two-digit number!\n");
        goto exit;
    }

    int tens = two_dig / 10;
    int ones = two_dig % 10;
    int new  = ones * 10 + tens;
    printf("The reversal is %d.\n", new);

exit:
    return 0;
}
