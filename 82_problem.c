#include<stdio.h>

char a[]="hello";
size_t my_strlen(char *a)
{
    size_t i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    return i;
}
int main(){
    printf("%zu",my_strlen(a));
    return 0;
}
