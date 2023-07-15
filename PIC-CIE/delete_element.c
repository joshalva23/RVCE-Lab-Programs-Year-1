#include<stdio.h>
void delete_ele(int *a,int *n){
    int pos,i,ele;
    printf("Enter the position to delete element(0 to %d)\n",(*n-1));
    scanf("%d",&pos);
    ele=a[pos];
    for(i=pos;i<*n-1;i=i+1){
        a[i]=a[i+1];
    }
    --(*n);
    printf("Deleted element is %d\n",ele);
}
int main(){
    int a[50],i,n,ele,temp;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    delete_ele(a,&n);
    printf("\nFinal array:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;

}