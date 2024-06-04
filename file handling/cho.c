#include <stdio.h>
#include<stdlib.h>

int main() {
    FILE *fp, *fp_odd, *fp_even;
    int num;

    fp = fopen("numbers.txt", "r");
    fp_odd = fopen("odd.txt", "w");
    fp_even = fopen("even.txt", "w");

    while (fscanf(fp, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            fprintf(fp_even, "%d\n", num);
        } else {
            fprintf(fp_odd, "%d\n", num);
        }
    }

    fclose(fp);
    fclose(fp_odd);
    fclose(fp_even);

    return 0;
}
