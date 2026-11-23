#include<stdio.h>

int main(){
    int n,i,a[5]={12,34,40,78,0},found=0;
    printf("search the number:\n");
    scanf("%d",&n);
    for(i=0;i<5;i++){
        if(a[i]==n){
            printf("THE POSITION OF THE RECQUIRED NUMBER IS %d\n",i+1);
            found=1;
            break;
        }
        }
        if(found==0){
            printf("NUMBER NOT FOUND");
        }
}