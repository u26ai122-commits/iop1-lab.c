#include <stdio.h>

int prime(int n)
{
    int i, flag = 0;
    if (n < 2)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }

    for (i = 2; i <= n / 2; i++)
    {

        if (n % i == 0)
        {
            flag = 0;

            break;
        }
        else
        {
            flag = 1;
        }
    }
    return flag;
}
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", prime(x));
}