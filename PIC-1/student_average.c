#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    char name[10];
    int rollno,t[3];
}stud;
int main()
{
    int i,roll,n,a,msum=0;
    float avg;
    stud s[20];
    printf("\nEnter the number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter the name of %d student=",i+1);
        scanf("%s",s[i].name);
        printf("Enter the roll no of %d student:",i+1);
        scanf("%d",&s[i].rollno);
        printf("Enter the 3 test scores of %d student=",i+1);
        scanf("%d%d%d",&s[i].t[0],&s[i].t[1],&s[i].t[2]);
    }
    printf("\nEnter the rollno of the student required=");
    scanf("%d",&roll);
    for(i=0;i<n;i++)
    {
        if(s[i].rollno==roll)
            break;
        else if(i==n-1)
            exit(0);
        else
            continue;
    }
    a=i;
    printf("\nThe name of the student is ");
    printf("%s",s[a].name);
    printf("\nThe 3 test scores of the student=");
    printf("%d %d %d\n",s[a].t[0],s[a].t[1],s[a].t[2]);
    msum=s[a].t[0]+s[a].t[1]+s[a].t[2];
    avg=msum/3.0;
    printf("\nThe average marks are %f\n",avg);
    return 0;
}