#include<stdio.h>
int main()
{
    // variable decalartion
    int no1,no2,add,sub,mult,div,mod;
    printf("enter integer number: ");
    scanf("%d",&no1);
    printf("enter integer number: ");
    scanf("%d,&no2");
    add=no1+no2;
    sub=no1-no2;
    mult=no1*no2;
    div=no1/no2;
    mod=no1%no2;
    printf("\naddition is %d",add);
    printf("\nsubtraction is %d",sub);
    printf("\nmultiplication is %d",mult);
    printf("\ndivision is %d",div);
    printf("\nmodulo division is %d\n\n",mod);
    return 0;

}