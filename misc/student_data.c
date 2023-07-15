#include<stdio.h>
typedef struct{
    char name[15];
    int age;
    float m1,m2,m3;
}stud;
void readdata(stud*);
void printdata(stud record);
float calculate(stud*);
int main(){
    stud s1;
    printf("%d",sizeof(s1));
    readdata(&s1);
    printdata(s1);
    printf("Total marks= %f",calculate(&s1));
    return 0;
}
void readdata(stud *s){
    printf("Enter name\n");
    gets(s->name);
    printf("Enter age\n");
    scanf("%d",&s->age);
    printf("Enter three marks\n");
    scanf("%f%f%f",&s->m1,&s->m2,&s->m3);
}
void printdata(stud record){
    printf("\nName:%s\n",record.name);
    printf("Age: %d\n",record.age);
    printf("Mark1: %f\nMark2: %f\nMark3: %f\n",record.m1,record.m2,record.m3);
}
float calculate(stud *s){
    return(s->m1+s->m2+s->m3);
}