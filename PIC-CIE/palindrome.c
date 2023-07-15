#include<stdio.h>
#include<string.h>
int str_len(char s[]){
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
}
void str_rev(int len,char *s1,char *s2){
    int i;
    for(i=0;i<len;i++)
        s2[len-i-1]=s1[i];
    s2[len]='\0';
}
char *get_count(int *c,int len,char *s1,char *s2){
    int i;
    for(i=0;i<len;i++){
        if(s1[i]==s2[i])
            (*c)++;
    }
    return s2;
}
void check_result(int count,int len){
    if(count!=len)
        printf("Not Palindrome");
    else    
        printf("Palindrome");
}
int main(){
    char s1[20],s2[20];
    int i,len,count=0;
    printf("Enter string\n");
    gets(s1);
    len=str_len(s1);
    str_rev(len,s1,s2);
    get_count(&count,len,s1,s2);
    check_result(count,len);
    return 0;
}