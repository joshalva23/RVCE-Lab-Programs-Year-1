#include<stdio.h>
int main(){
    int a[10],i,sum=0,n;
    float avg;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)    
        sum=sum+a[i];
    avg=sum/(float)n;
    printf("\nThe sum of elements is %d\n",sum);
    printf("The average of elements is %f\n",avg);

    return 0;
}