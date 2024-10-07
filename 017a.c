#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter three sides a,b and c: ");
scanf("%d%d%d",&a,&b,&c);
if(a==b&&b==c)
    printf("Equilateral triangle");
else if (a==b||a==c||b==c)
    printf("Isosceles triangle");
else
    printf("Scalene triangle");
    return 0;
}
