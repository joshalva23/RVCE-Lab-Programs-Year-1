#include<stdio.h>
#include "string_functions.c"

int main(){
    char s[20];
    int i,len;
    printf("Enter string\n");
    gets(s);
    str_rev(s);
    printf("Reversed String is %s",s);
    return 0;
}