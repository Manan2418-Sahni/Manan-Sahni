//Write a program to input two numbers and display their sum,difference,product and quotient.
#include <stdio.h>
int main()
{
    int a , b , sum = 0 , diff = 0 , prod = 0;
    float quot = 0.0;
    printf("Enter first number");
    scanf("%d/n",&a);
    printf("Enter second number");
    scanf("%d/n",&b);
    sum =  a + b;
    diff = a - b;
    prod = a * b;
    quot = (float)a / b;
    printf("Addition is = %d\n",sum);
    printf("Difference is = %d\n",diff);
    printf("Product is = %d\n",prod);
    printf("Quotient is = %.2f\n",quot);
    return 0;

}