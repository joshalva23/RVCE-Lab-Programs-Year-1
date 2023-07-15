#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],result[10][10],r1,c1,r2,c2,i,j,k,cond;
    reenter:
    printf("Enter the rows and columns for first matrix:");
    scanf("%d%d",&r1,&c1);
    printf("Enter the rows and columns for the second matrix:");
    scanf("%d%d",&r2,&c2);
    recheck:
    printf("Enter the operation to be performed\n1.Addition\n2.Subtraction\n3.Multiplication\n");
    scanf("%d",&cond);
    switch(cond){
    case 1:
    {   //Addition of matrices
        if(c1==c2&&r1==r2){
            printf("\nEnter elements of matrix 1\n");
            for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
        {
            printf("Enter the elements a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        printf("\nEnter elements of matrix 2\n");
            for(i=0;i<r2;i++)
            for(j=0;j<c2;j++)
            {
            printf("Enter the elements b%d%d:",i+1,j+1);
            scanf("%d",&b[i][j]);
            }
        for(i=0;i<r2;i++)
            for(j=0;j<c2;j++){
                result[i][j]=a[i][j]+b[i][j];
            }
        printf("\nOutput Matrix:\n");
        for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
        {
            printf("%d\t",result[i][j]);
            if(j==c1-1)
                printf("\n\n");
        }
        }
        else{
        printf("Error");
        goto reenter;
        }
    }
    break;
    case 2:
    {   //Subtraction of Matrices
         if(c1==c2&&r1==r2){
            printf("\nEnter elements of matrix 1\n");
            for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
        {
            printf("Enter the elements a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        printf("\nEnter elements of matrix 2\n");
            for(i=0;i<r2;i++)
            for(j=0;j<c2;j++)
            {
            printf("Enter the elements b%d%d:",i+1,j+1);
            scanf("%d",&b[i][j]);
            }
        for(i=0;i<r2;i++)
            for(j=0;j<c2;j++){
                result[i][j]=a[i][j]-b[i][j];
            }
        printf("\nOutput Matrix:\n");
        for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
        {
            printf("%d\t",result[i][j]);
            if(j==c1-1)
                printf("\n\n");
        }
    }
    break;
    case 3:{//Multiplication of Matrix
    while(c1!=r2)
    {
        printf("Error! column of first matrix is not equal to row of second matrix.\n\n");
        printf("Enter the rows and columns for first matrix:");
        scanf("%d%d",&r1,&c1);
        printf("Enter the rows and columns for the second matrix:");
        scanf("%d%d",&r2,&c2);
    }
    printf("\nEnter elements of matrix 1\n");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
        {
            printf("Enter the elements a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    printf("\nEnter elements of matrix 2\n");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
        {
            printf("Enter the elements b%d%d:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    for(i=0;i<r1;i++)
         for(j=0;j<c2;j++)
            result[i][j]=0;
    
    for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)
            for(k=0;k<c1;k++)
                result[i][j]+=a[i][k]*b[k][j];
    printf("\nOutput Matrix:\n");
    for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)
        {
            printf("%d\t",result[i][j]);
            if(j==c2-1)
                printf("\n\n");
        }
    }
    break;
    default:printf("Wrong value");
            goto recheck;
    }
}
return 0;
}