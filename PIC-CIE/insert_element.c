#include<stdio.h>
int main(){
    int a[50],i,n,pos,ele,temp;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the position to insert element(0 to %d)\n",(n-1));
    scanf("%d",&pos);
    printf("Enter the element to insert\n");
    scanf("%d",&ele);
    for(i=n-1;i>=pos;i=i-1){
        a[i+1]=a[i];
    }
    a[pos]=ele;
    ++n;
    printf("Final array:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}