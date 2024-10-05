#include<stdio.h>
int main()
{
    int radius,dimeter;
    float area,perimeter;
    printf("Enter radius");
    scanf("%d",&radius);
    dimeter=2*radius;
    perimeter=2* 3.14*radius;
    area=3.14*radius*radius;
    printf("dimeter = %d\n perimeter = %F\n area = %f",dimeter,perimeter,area);
}
