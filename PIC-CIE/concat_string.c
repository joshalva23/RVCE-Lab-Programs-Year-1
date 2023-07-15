#include<stdio.h>
int str_len(char *s){
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
}
void str_concat(char *s1, char*s2){
    int len1=str_len(s1);
    int len2=str_len(s2);
    int i;
    for(i=0;i<len2;i++)
        s1[len1+i]=s2[i];
    s1[len1+len2]='\0';
}
int main(){
    char s1[20],s2[20];
    printf("Enter string\n");
    gets(s1);
    printf("Enter second string\n");
    gets(s2);
    str_concat(s1,s2);
    printf("Concatenated String\n");
    puts(s1);
    return 0;
}