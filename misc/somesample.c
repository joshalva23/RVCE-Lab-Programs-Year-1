#include<stdio.h>
int main(){
    int a=3,*b;
    5>4?printf("\n%d",((a=2)==(a=3))):printf("hi");
    b=&a;
    printf("\n%p",b);
    return 0;
}