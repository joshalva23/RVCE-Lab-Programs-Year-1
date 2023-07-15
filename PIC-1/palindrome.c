#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void cheek(char []);
int main()
{
    char word[15];
    system("CLS");
    printf("Enter a string to check if it's a palindrome\n");
    scanf("%s",word);
    cheek(word);
    return 0;
}
void cheek(char word[]){
    static index=0;
    int len=strlen(word)-(index+1);
    if(word[index]==word[len]){
        if(index+1==len||index==len){
            printf("\nThe entered word is a palindrome.\n");
            return;
        }
        index++;
        cheek(word);
    }
    else{
        printf("\nThe entered word is not a palindrome\n");
        return;
    }

}
