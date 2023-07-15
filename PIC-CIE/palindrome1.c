#include<stdio.h>
#include "string_functions.c"
int main(){
    char s1[20],s2[20];
    int i,len,count=0;
    printf("Enter string\n");
    gets(s1);
    str_cpy(s1,s2);
    str_rev(s1);
    if(str_comp(s1,s2))
        printf("Not Palindrome");
    else    
        printf("Palindrome");
    return 0;
}