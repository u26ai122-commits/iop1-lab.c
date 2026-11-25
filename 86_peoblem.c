#include <stdio.h>

int main(void) {
    char first[] = "Hello, ";
    char second[] = "world!";
    char result[50];

    int i = 0;
    while (first[i] != '\0') {
        result[i] = first[i];
        i++;
    }

    int j = 0;
    while (second[j] != '\0') {
        result[i] = second[j];
        i++;
        j++;
    }

    result[i] = '\0';

    printf("%s\n", result);
    return 0;
}