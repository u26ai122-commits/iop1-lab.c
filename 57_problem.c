#include<stdio.h>

int main()
{
    int i,a[10],b[10],temp[10];
    printf("First array\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }  
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    printf("Second array\n");
    for(i=0;i<10;i++){
        scanf("%d",&b[i]);
    }  
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", b[i]);
    }
    printf("\n");
    for(i=0;i<10;i++){
        temp[i]=a[i];
        a[i]=b[i];
        b[i]=temp[i];
        }
    printf("After swapping\n");
    printf("First array\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    printf("Second array\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", b[i]);
    }
    printf("\n");
}