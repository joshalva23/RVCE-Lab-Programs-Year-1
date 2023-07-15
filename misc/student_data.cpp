#include<iostream>
#include<stdio.h>
using namespace std;

struct stud{
    char name[10];
    int age;
    float m1,m2,m3;
};

class student{
    stud s;
    public:
    student(){
        readdata();
        printdata();
    }
    void readdata(){
        printf("Enter name\n");
        cin>>(s.name);
        printf("Enter age\n");
        cin>>s.age;
        printf("Enter three marks\n");
        cin>>s.m1>>s.m2>>s.m3;
    }
    void printdata(){
        printf("\nName:%s\n",s.name);
        printf("Age: %d\n",s.age);
        printf("Mark1: %f\nMark2: %f\nMark3: %f\n",s.m1,s.m2,s.m3);
    }
    float calculate(){
        return(s.m1+s.m2+s.m3);
    }
};

int main(){

    student stu;
    printf("Total marks= %f",stu.calculate());
    return 0;
}