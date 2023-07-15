#include<stdio.h>
int check(int n){
    int i=2,j=1;
    while(i<n/2){
        if(n%i!=0){
            j=0;
            break;
        }
        i++;
    }
    return j;
}
void display(int j){
    if(j==0)
        printf("Not prime\n");
    else    
        printf("Prime\n");
}
int main(){
    int n,j=0;
    printf("Enter number:\n");
    scanf("%d",&n);
    j = check(n);
    display(j);
    return 0;
}
