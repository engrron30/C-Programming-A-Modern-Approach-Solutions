#include <stdio.h>

#define NUM_OF_INTS     16

int main() {

    int integ_arr[NUM_OF_INTS];
    printf("Enter the numbers from 1 to 16 in any order:\n");
	
    for (int i = 0; i < NUM_OF_INTS; i++) {
        scanf("%d", &integ_arr[i]);
        if (integ_arr[i] < 0 || integ_arr[i] > 16) {
            printf("This program only accepts integers between 1 and 16 inclusive.\n");
            goto exit;
        }
    }

    printf("\n4x4 Arrangement: \n");
    int sum_row[4] = { 0 };
    int sum_col[4] = { 0 };
    int sum_dia[2] = { 0 };
    
    for (int j = 0, col = 1, row = 1; j < NUM_OF_INTS; j++, col++) {
        int old_row = row;
        //printf("Row=%d Col=%d Val=%d\n", row, col, integ_arr[j]);
        sum_row[row - 1] += integ_arr[j];
        sum_col[col - 1] += integ_arr[j];
        printf("%2d ", integ_arr[j]);

        if (row == col)
            sum_dia[0] += integ_arr[j];
        else if (row + col == 5)
            sum_dia[1] += integ_arr[j];
        if ((j+1)%4 == 0)
            row++;
        if (row != old_row) {
            col = 0;
            putchar('\n');
        }
    }

    for (int k = 0; k < 4; k++) {
        if (k == 0)
            printf("\nSum of Rows:        ");
        printf("%d ", sum_row[k]);
    }

    for (int k = 0; k < 4; k++) {
        if (k == 0)
            printf("\nSum of Columns:   ");
        printf("%d ", sum_col[k]);
    }

    for (int k = 0; k < 2; k++) {
        if (k == 0)
            printf("\nSum of Diagonals: ");
        printf("%d ", sum_dia[k]);
    }

    printf("\n");
exit:
    return 0;
}
