#include <stdio.h>

int main()
{
    int a[10], i, num, count = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array is:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("Enter the num:\n");
    scanf("%d", &num);
    for (i = 0; i < 10; i++)
    {
        if (a[i] == num)
        {
            count++;
        }
    }
    printf("The occurence of the number is %d", count);
}