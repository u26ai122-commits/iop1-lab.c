#include <stdio.h>

int main()
{
    int i, j, k, a[3][3], b[3][3], c[3][3],d[3][3];
    for (k = 0; k < 2; k++)
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d\t", a[i][j]);
            }

            printf("\n");
        }
        printf("\n");
    
    
    if(k == 1)
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                b[i][j]=a[i][j];
            }
        }
    }
    else if(k==0){
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                d[i][j]=a[i][j];
            }
        }

    }
} 
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
     for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", d[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = d[i][j] + b[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}