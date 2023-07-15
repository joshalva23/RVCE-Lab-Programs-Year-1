#include<stdio.h>
int main(){
    int a[100],b[100],c[100],i,j,k=0,count,n,num;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        b[i]=0;
        c[i]=0;
    }
    for(i=0;i<n;i++){
        count=1;
        num=a[i];
        if(num!=-1){
            b[k]=num;
            for(j=i+1;j<n;j++){
                if(num==a[j]){
                    count+=1;
                    a[j]=-1;
                }
            }
            a[i]=-1;
            c[k]=count;
            k++;
        }
    }
    printf("\nFinal value\n\nElement\tFrequency\n");
    for(i=0;i<k;i++){
        printf("%d\t%d\n",b[i],c[i]);
    }
    return 0;
}