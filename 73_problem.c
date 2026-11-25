#include <stdio.h>

int febonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return febonacci(n - 1) + febonacci(n - 2);
}
int main()
{
    int n, i;
    printf("Enter the number of terms:\n ");
    scanf("%d", &n);
    printf("Fibonacci series:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", febonacci(i));
    }
    return 0;
}