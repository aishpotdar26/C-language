#include<stdio.h>
int main()
{
    int p,t;
    float r,si;
    printf("Enter principle amount: ");
    scanf("%d",&p);
    printf("Enter rate of interest: ");
    scanf("%f",&r);
    printf("Enter time duration: ");
    scanf("%d",&t);
    si=p*(r/100)*t;
    printf("simple interest is %f",si);

}