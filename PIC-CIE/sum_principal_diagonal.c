#include<stdio.h>
int main()
{
    int sum=0,a[10][10],m,cond,i,j,temp;
    printf("Enter the order of matrix\n");
    scanf("%d",&m);
    printf("Enter the elements\n");
    for(i=0;i<m;i++)
        for(j=0;j<m;j++){
            printf("Enter a[%d][%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    printf("Enter condition:\n1.Principal diagonal elements sum\n2.Secondary diagonal element sum\n3.Sum of row\n4.Sum of column\n");
    scanf("%d",&cond);
    switch(cond){
        case 1:
        {
            for(i=0;i<m;i++)
                sum=sum+a[i][i];
            printf("Sum of principal diagonal elements is %d\n",sum);
        }
        break; 
        case 2:
        {
            for(i=0;i<m;i++)
                sum=sum+a[i][m-i-1];
            printf("Sum of secondary diagonal elements is %d\n",sum);
        }
        break;
        case 3:
        {
            printf("Enter row number(0 to %d):\n",m-1);
            scanf("%d",&temp);
            for(i=0;i<m;i++)
                sum=sum+a[temp][i];
            printf("Sum of row elements is %d\n",sum);
        }
        break;
        case 4:
        {
            printf("Enter column number(0 to %d):\n",m-1);
            scanf("%d",&temp);
            for(i=0;i<m;i++)
                sum=sum+a[i][temp];
            printf("Sum of column elements is %d\n",sum);
        }
        break;
        default:{ printf("Error");

    }}
    return 0;
}
