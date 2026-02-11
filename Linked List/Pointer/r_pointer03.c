#include<stdio.h>

int sum (int *a, int size ){// return the sum of array 
int i, sum = 0;
for ( i = 0; i < size; i++)
{
    sum = sum + *(a + i);
}
return sum;
}


int main(){
    int arry[3]={1,2,3};
    int result = sum(arry,3);
    printf("sum of the array is %d\n", result);
    
return 0;
 }