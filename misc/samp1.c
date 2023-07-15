#include<stdio.h>
int main(){
    int i,j,k,count=0;
    for(i=1;i<=20;i++)
        for(j=1;j<=i;j++)
            for(k=1;k<=j;k++)
                count++;
    printf("%d",count);
}