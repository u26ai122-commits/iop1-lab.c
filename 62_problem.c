#include<stdio.h>

int main(){
    int i,j,a[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        int sum=0;
        for(j=0;j<3;j++){
            sum=sum+a[i][j];

        }
        printf("sum of row r%d=%d\n",i+1,sum);
    }
}