#include<stdio.h>
int main(){
    char s[20],s2[20];
    int i;
    printf("Enter string\n");
    gets(s);
    for(i=0;s[i]!='\0';i++);
    printf("String length is %d",i);
    return 0;
}