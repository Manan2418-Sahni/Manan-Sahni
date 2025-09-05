// Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
    int r , area = 0 , circumference = 0;
    printf("Enter the radius");
    scanf("%d\n",&r);
    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;
    printf("Area is = %d\n",area);
    printf("Circumference is = %d\n",circumference);
    return 0;
}