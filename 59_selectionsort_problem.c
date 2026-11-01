#include <stdio.h>

int main()
{
    int a[10];
    int i, j;

    for (i = 0; i < 10; i++) {
        if (scanf("%d", &a[i]) != 1) {
            return 1;
        }
    }

    for (i = 0; i < 9; i++) {
        int min_index = i;

        for (j = i + 1; j < 10; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }

        if (min_index != i) {
            int temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }

    printf("Sorted array\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}