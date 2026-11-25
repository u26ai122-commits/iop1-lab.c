#include <stdio.h>
double pow(double a, double b)
{

    if (b == 0)
    {
        return 1;
    }
    else if (a == 0)
    {
        return 0;
    }
    return a * pow(a, b - 1);
}
int arm(int x)
{
    int original = x;
    int temp = x;
    int count = 0;
    do
    {
        x = x / 10;
        count++;

    } while (x > 0);

    int sum = 0;
    while (temp > 0)
    {
        int q = temp % 10;
        sum = sum + pow(q, count);
        temp = temp / 10;
    }
    return original == sum;
}
int main()
{
    int x;
    scanf("%d", &x);
    if (arm(x))
    {
        printf("%d is an armstrong number", x);
    }
    else
    {
        printf("%d is not an armstrong number", x);
    }
}