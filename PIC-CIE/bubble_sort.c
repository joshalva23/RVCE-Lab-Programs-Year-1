#include<stdio.h>
int main(){
    int n=0,i,j,temp,a[20];
    printf("\nEnter the size of n:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]); 
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++)
            if(a[j]>=a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
    printf("Sorted array is:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}