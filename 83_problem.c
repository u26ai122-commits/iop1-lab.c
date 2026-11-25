#include<stdio.h>

#include <stdio.h>

void my_strcopy(char destination[], const char source[])
{
    size_t i = 0;

    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';  
}

int main(void)
{
    char source[] = "hello";
    char destination[6];    

    my_strcopy(destination, source);

    printf("%s\n", destination);
    return 0;
}