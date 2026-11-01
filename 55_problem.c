#include <stdio.h>

int main()
{
    int i, a[10],largest,second,flag=0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    largest = a[0];
    for(i=0;i<10;i++){
       if(a[i]>largest){
        largest=a[i];
       }
}
printf("Largest element is: %d\n",largest);
for(i=0;i<10;i++){
    if(a[i]<largest){
        if(flag==0 || a[i]>second){
            second=a[i];
            flag=1;
        }
    }
}
if(flag==1){
    printf("Second largest element is: %d\n",second);
}
else{
    printf("There is no second largest element.\n");
}
return 0;
}