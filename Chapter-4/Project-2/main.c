#include <stdio.h>

#define DEBUG 0

int main() {
    int three_dig; 
    printf("Enter a two digit number: ");
    int ret = scanf("%d", &three_dig);

    if (!ret) {
        perror("Error encountered in scanf.\n");
        goto exit;
    } else if (three_dig < 100 || three_dig > 999) {
        printf("Number is not a three-digit number!\n");
        goto exit;
    }

    int hund = three_dig / 100;
    int tens = (three_dig / 10) % 10;
    int ones = (three_dig % 100) % 10;
    int new  = (ones * 100) + (tens * 10) + hund;
    
    if (DEBUG) {
        printf("---------------------------\n");
        printf("ones = %d\n", ones);
        printf("tens = %d\n", tens);
        printf("hund = %d\n", hund);
        printf("---------------------------\n");
    }
    printf("The reversal is %d.\n", new);

exit:
    return 0;
}
