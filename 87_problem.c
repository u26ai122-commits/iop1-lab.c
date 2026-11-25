#include<stdio.h>
#include<string.h>
void strrev(char *str){
    int n = strlen(str);
    for(int i=0; i<n/2; i++){
        char temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
}
int main(){
    char a[20]="Hello";
    size_t n = strlen(a);
    printf("Length of the string: %zu\n", n);
    
    char b[20];
    strcpy(b, a);
    printf("Copied string: %s\n", b);
     int result = strcmp(a,b);
    printf("Comparison result: %d\n", result);
    
    char c[]=" world";
    strcat(a,c);
    printf("Concatenated string: %s\n", a);
    strrev(b);
    printf("Reversed string: %s\n", b);
    return 0;
}