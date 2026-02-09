#include<stdio.h>
int main(){
    int x;
    x= 10;
    int *ptr;
    ptr = &x;
    printf("the value of X is %d\n",x);
    printf("memory address is %p\n",&x);
    printf("pointer memory value is %p\n",ptr);
    return 0;
}