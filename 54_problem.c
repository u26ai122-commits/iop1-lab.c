#include<stdio.h>

int main(){
    int i,a[10];
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);}         
     for(i=0;i<10;i++){
        printf("%d\t",a[i]);
     }printf("\n");
     printf("Positive elements are: \n");
      for(i=0;i<10;i++){
        if(a[i]>0){
            printf("%d\t",a[i]);
        }
      }printf("\n");
      printf("Negative elements are: \n");
       for(i=0;i<10;i++){
        if(a[i]<0){
            printf("%d is negative \n",a[i]);
        }
       }printf("\n");
        for(i=0;i<10;i++){
            if(a[i]==0){
                printf("%d is there\n",a[i]);
            }
        }
}