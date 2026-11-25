#include <stdio.h>

int my_strcmp(const char first[], const char second[])
{
    size_t i = 0;

    while (first[i] == second[i] && first[i] != '\0')
    {
        i++;
    }

    return (unsigned char)first[i] - (unsigned char)second[i];
}

int main(void)
{
    char a[] = "hello";
    char b[] = "hello";

    int result = my_strcmp(a, b);

    if (result == 0)
        printf("Strings are equal\n");
    else if (result < 0)
        printf("First string comes before second\n");
    else
        printf("First string comes after second\n");

    return 0;
}