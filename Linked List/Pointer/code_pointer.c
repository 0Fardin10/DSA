#include<stdio.h>
int main(){
    int a,b,c,*p1,*p2,*p3;
    a=5,b=3,c=2;
    p1 =&a;
    p2=&b;
    p3=&c;
    /*int sum =*p1 + *p2+ *p3;
    printf("%d",sum);*/
    if (*p1>*p2 && *p1>*p3)
    {
    printf("largest number is %d",*p1);
    }
    else if (*p2>*p1 && *p2>*p3)
    {
     printf("largest number is %d",*p2);
    }
    else{
        printf("true is %d biggest number",*p3);
    }
    

 return 0;   
}  