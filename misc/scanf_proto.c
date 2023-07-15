#include<string.h>
#include<stdio.h>
void main(){
    int num;
    char buff[20];
    gets(buff);

    sscanf(buff,"%d",&num);
    printf("\n%d",num);

}