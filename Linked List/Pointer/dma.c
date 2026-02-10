#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr1 ,*ptr2;
    ptr1 = (int *)malloc(5 * sizeof(int));
 ptr2 = (int *)calloc(5,sizeof(int));
    if (ptr1 == NULL || ptr2 == NULL)
 {
    printf("memory not allocated\n");
 }else
 {
    printf("done allocated\n");
    // do work 
    ptr1 = realloc(ptr1, sizeof(int));
    printf("memory reallocation succesfull\n");
    /*free(ptr);
    printf("memory free succesfully\n");*/

 }

    return 0;
}