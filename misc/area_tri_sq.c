#include<stdio.h>
#define PI 3.14
int main()
{
    float ba,he,len,bre,ra,le;
    float area_tri, area_squ, area_rect, area_circle;
    printf("Enter the base and height\n");
    scanf("%f%f",&ba,&he);
    printf("Enter the length and breadth\n");
    scanf("%f%f",&len,&bre);
    printf("Enter the side of square\n");
    scanf("%f",&le);
    printf("Enter the radius\n");
    scanf("%f",&ra);
    area_tri=0.5*ba*he;
    area_squ=le*le;
    area_rect=len*bre;
    area_circle=PI*ra*ra;
    printf("Area of Triangle=%f\n",area_tri);
    printf("Area of Square=%f\n",area_squ);
    printf("Area of rectangle=%f\n",area_rect);
    printf("Area of circle=%f\n",area_circle);
    return 0;
}