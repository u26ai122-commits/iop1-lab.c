#include<stdio.h>
int main(){
  int i,a[5],temp;
  for(i=0;i<5;i++){
    scanf("%d",&a[i]);
  }
  printf("Array before swapping:\n");
  for(i=0;i<5;i++){
    printf("%d\t",a[i]);
  }
  printf("\n");
  for(i=0;i<3;i++){
    temp=a[i];
    a[i]=a[4-i];
    a[4-i]=temp;
    }
  printf("reversed array:\n");
  for(i=0;i<5;i++){
    printf("%d\t",a[i]);
  }
}
