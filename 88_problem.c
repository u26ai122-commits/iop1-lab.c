#include <stdio.h>
int main()
{
    char a[20];
    int fact = 0;
    fgets(a, 20, stdin);
    char x;
    scanf(" %c", &x);
    printf("%c ", x);
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == x)
        {
            fact = 1;
            break;
        }

        else
        {
            fact = 0;
        }
    }
    if (fact == 1)
    {
        printf("Character is present\n");
    }
    else if (fact == 0)
    {
        printf("Character is not present\n");
    }
}
