#include<stdio.h>
void printarr(int *a){
    int n=abs(*(&a+1)-a);
    int i;
    for(i=0;i<=n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
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
                printarr(number);
            }
        }
    printf("Sorted elements:\n");
    for(i=0;i<count;i++)
        printf("%d\t",number[i]);
    return 0;
}