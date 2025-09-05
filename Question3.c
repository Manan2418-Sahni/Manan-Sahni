// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main()
{
    int L , B , perimeter = 0 , area = 0;
    printf("Enter first number");
    scanf("%d\n",&L);
    printf("Enter second number");
    scanf("%d\n",&B);
    perimeter = 2 * (L + B);
    area = L * B;
    printf("Perimeter is = %d\n",perimeter);
    printf("Area is = %d\n",area);
    return 0;
}