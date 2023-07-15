#include<stdio.h>
int main(){
    int i,j, count,temp,number[25];
    printf("Enter number of elements\n");
    scanf("%d",&count);
    printf("Enter %d elements :\n",count);
    for(i=0;i<count;i++)
        scanf("%d",&number[i]);
    for(i=0;i<count;i++)
        for(j=i+1;j<count;j++){
            if (number[i]>number[j]){
                temp=number[j];
                number[j]=number[i];
                number[i]=temp;
            }
        }
    printf("Sorted elements:\n");
    for(i=0;i<count;i++)
        printf("%d\t",number[i]);
    return 0;
}