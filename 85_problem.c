#include <stdio.h>

void reverse_string(char text[])
{
    size_t length = 0;

  
    while (text[length] != '\0')
        length++;

    
    for (size_t i = 0; i < length / 2; i++)
    {
        char temp = text[i];
        text[i] = text[length - 1 - i];
        text[length - 1 - i] = temp;
    }
}

int main(void)
{
    char text[] = "hello";

    reverse_string(text);
    printf("%s\n", text);  

    return 0;
}