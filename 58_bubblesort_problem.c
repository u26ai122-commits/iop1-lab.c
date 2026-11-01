#include<stdio.h>

int main(){
    int i,a[10];
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }   
    for(i=0;i<10;i++){
        printf("%d\t",a[i]);
    }printf("\n");
    for(i=0;i<10;i++){
        for(int j=0;j<10-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array\n");
    for(i=0;i<10;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

}