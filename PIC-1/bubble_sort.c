#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sort(int *a,int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++)
            if(a[j]>=a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
}
void display(int *a,int n){
    int i;
    printf("Sorted array is:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}

int main()
{
    clock_t t;
    //t=clock();
    int n=0,i,j,temp,a[100];
    printf("\nEnter the size of n:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    t=clock();
    sort(a,n);
    display(a,n);
    t=clock()-t;
    double time_taken=((double)t)/CLOCKS_PER_SEC;
    printf("\n\nCode executed in %lf seconds\n",time_taken);
    return 0;
}