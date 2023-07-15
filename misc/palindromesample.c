#include<stdio.h>
#include<string.h>
int main(){
    char word[15],samp[15];
    printf("Enter the string\n");
    scanf("%s",word);
    strcpy(samp,word);
    strrev(samp);
    if(!strcmpi(samp,word))
        printf("Palindrome");
    else    
        printf("Not palindrome");
    return 0;
}