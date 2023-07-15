#include<stdio.h>
#include<time.h>
int main(){
    int sm,lg=0,n=1,i,j;
    clock_t t;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sm=a[0];
    t=clock();
    for(i=0;i<n;i++)
        for(j=0;j<n-i;j++){
            if((a[i]<a[j])&&a[j]>lg)
                lg=a[j];
            if((a[i]>a[j])&&a[j]<sm)
                sm=a[j];
        }
    t=clock()-t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Largest element is %d\n",lg);
    printf("Smallest element is %d\n",sm);
    printf("Time taken %lf seconds\n",time_taken);
    return 0;
}