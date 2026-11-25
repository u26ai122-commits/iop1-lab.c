#include<stdio.h>

void interchange(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    
}
int main(){
    int x=5,y=10;
    interchange(&x,&y);
    printf("x=%d\t y=%d",x,y);
}