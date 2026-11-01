#include<stdio.h>

int main(){
    int i,a[10];
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);

    }
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
        printf("\t");
    }
    printf("\n");
    
     for(i=0;i<10;i++){
        if(a[i]%2==0){
            printf("%d is even \n",a[i]);
        }
     }printf("\n");
     for(i=0;i<10;i++){
        if(a[i]%2!=0){
            printf("%d is odd \n",a[i]);
        }
     }


    
}