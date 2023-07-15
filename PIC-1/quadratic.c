#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root,disc,root1,root2;
    printf("\nEnter the coefficients:\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0&&b!=0)
    {
        root=-c/b;
        printf("Linear root=%f\n",root);
    }
    else{
        disc=b*b-4*a*c;
        if(disc>0){
            root1=(-b+sqrt(disc))/(2*a);
            root2=(-b-sqrt(disc))/(2*a);
            printf("\nRoots are real and distinct!\n");
            printf("\nThe roots are %f and %f\n",root1,root2);
        }
        else if(disc==0){
            root1=root2=-b/(2*a);
            printf("\nRoots are equal and real\n");
            printf("\nThe roots are \n%f\n%f\n",root1,root2);
        }
        else{
            root1=-b/(2*a);
            root2=sqrt(abs(disc))/(2*a);
            printf("\nThe roots are imaginary!\n");
            printf("\nThe first root is %f+%fi\n",root1,root2);
            printf("The second root is %f-%fi\n",root1,root2);
        }
    }
    return 0;
}