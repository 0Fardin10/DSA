#include<stdio.h>
 int main(){
    int a[5]={1,2,3,4,5};
    int i , sum = 0;
    
    for (  i = 0; i < 5; i++)
   {
sum =( sum + (*a+i));
   }
   printf("the sum is   %d\n",sum);
   
    /* {
        printf("address of array is : %u\n",&a[i]);
    }
    printf("address of a : %u\n",a); */
    return 0;

 }