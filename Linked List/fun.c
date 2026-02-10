#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("write 3 code :\n");
  scanf(" %d%d%d",&a,&b,&c);
 int *p1 = &a;
 int *p2 = &b;
 int *p3 = &c;
 if(*p1>*p2 && *p1>*p3){
     printf("a is biggest\n");
 }
 else if(*p1<*p2 && *p1<*p3){
     printf("a is lowest  number\n");
 }
 else if(*p2>*p1 && *p2>*p3){
     printf("b is biggest \n");
 }
 else if(*p2<*p1 && *p2<*p3){
     printf("b is lowest number\n");
 }
 else if(*p3>*p1 && *p3>*p2){
     printf("c is biggest \n");
 }
 else if(*p3<*p1 && *p3<*p2){
     printf("c is lowest number\n");
 }
    return 0;
}
