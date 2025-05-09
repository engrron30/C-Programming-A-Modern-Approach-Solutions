#include <stdio.h>

int main() {

    int num_frac[2] = { 0 };
    int den_frac[2] = { 0 };

    printf("Enter two fractions separated by a plus sign: ");
    int rv = scanf("%d/%d+%d/%d", &num_frac[0], &den_frac[0], &num_frac[1], &den_frac[1]);
    if (rv != 4) {
        printf("Parameters are lacking or too many!\n");
        goto exit; 
    }

    int sum_num = 0, sum_den = 1;
    for (int i = 0; i < 2; i++) {
        if (den_frac[i] == 0) {
            perror("Denominator cannot be zero.\n");
            goto exit;
        }

        int j;
        if (i == 0)
            j = 1;
        else
            j = 0;

        //printf("[%d] i=%d j=%d num=%d\n", i, i, j, num_frac[i] * den_frac[j]);
        sum_num += (num_frac[i] * den_frac[j]);
        sum_den *= den_frac[i];
        
    }

    printf("The sum is %d/%d.\n", sum_num, sum_den);

exit:
    return 0;
}
