#include <stdio.h>
int pal(int num)
{
    int sum = 0;
    int original = num;
    while (num > 0)
    {

        int q = num % 10;
        sum = sum * 10 + q;
        num = num / 10;
    }
    return original == sum;
}
int main()
{
    int x;
    scanf("%d", &x);
    if (pal(x))
    {
        printf("%d is palindrom number", x);
    }
    else
    {
        printf("Not palindrom");
    }
}