#include<stdio.h>

int main(){
    int i,a[10];
   for(i=0;i<10;i++){
        scanf("%d",&a[i]);}         
     for(i=0;i<10;i++){
        printf("%d\t",a[i]);
     }printf("\n");
     for(i=0;i<10;i++){
        if(a[i]>0){
            printf("%d is positive",a[i]);
        }printf("\t");
        if(a[i]<0){
            printf("%d is negative",a[i]);}
            printf("\t");
            if(a[i]==0){
                printf("%d is zero",a[i]);}
     } 
}