#include<stdio.h>
typedef struct student{
	char name[10];
	int rollno,t[3];
	float avg;
}stud;
int main(){
	int i,j,roll,n,msum=0,a,k,max_marks;
	float avg;
	printf("Enter the number of students=");
	scanf("%d",&n);
	stud s[n];
	for(i=0;i<n;i++){
		printf("\nEnter the name of %d student= ",i+1);
		gets(s[i].name);
		printf("Enter the rollno of %d student= ",i+1);
		scanf("%d",&s[i].rollno);
		printf("Enter the 3 test scores of %d student= ",i+1);
		scanf("%d%d%d",&s[i].t[0],&s[i].t[1],&s[i].t[2]);
		msum=s[i].t[0]+s[i].t[1]+s[i].t[2];
	        s[i].avg=msum/3.0;
	}
        printf("\n\nThe entered data is:\n");
        printf("Name\tRollno\tCourse1\tCourse2\tCourse3\tAverage\n");
	for(i=0;i<n;i++){
                printf("%s\t",s[i].name);
                printf("%d\t",s[i].rollno);
                printf("%d\t%d\t%d\t",s[i].t[0],s[i].t[1],s[i].t[2]);
                printf("%f\n",s[i].avg);
        }
        printf("\n\n");
        for(j=0;j<3;j++){
        	msum=0;
        for(i=0;i<n;i++){
        	msum=msum+s[i].t[j];	
        }
        	avg=msum/(float)n;
        	printf("Course %d Average: %f\n",j+1,avg);
        }
    printf("\n\n");
	printf("Coursewise toppers:\n");
	for(j=0;j<3;j++){
		a=0;max_marks=0;
	for(i=0;i<n;i++)
		for(k=0;k<n;k++){
			if((s[i].t[j]<s[k].t[j])&&(s[k].t[j]>max_marks)){
				a=k;max_marks=s[k].t[j];	
		}}
		printf("Course %d: %s\n",j+1,s[a].name);
	}
	recheck:
	printf("\nEnter the rollno of the student required= ");
	scanf("%d",&roll);
	for(i=0;i<n;i++)
		if(s[i].rollno==roll)
			break;
		else
			continue;
	if(i==n){
		printf("Error");
		goto recheck;
	}
	a=i;
	printf("\nThe name of the student is %s\n",s[a].name);
	printf("The 3 test scores of the student are ");
	printf("%d %d %d",s[a].t[0],s[a].t[1],s[a].t[2]);
	printf("\nThe average marks are ");
	printf("%f\n",s[a].avg);
	
	
	
	return 0;
}
