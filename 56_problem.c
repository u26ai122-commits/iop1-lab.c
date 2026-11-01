#include<stdio.h>

int main(){
    int i,a[10],b[10],c[10];
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
    printf("Sum of arrays\n");
    for(i=0;i<10;i++){
        c[i]=a[i]+b[i];
    }
    for(i=0;i<10;i++){
        printf("%d\t",c[i]);
    }

    }