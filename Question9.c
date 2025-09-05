//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include<stdio.h>
#include<math.h>
int main()
{
    float prcpl , rate , time , s_i , c_i ;
    printf("Enter principal,rate and time: ");
    scanf("%f%f%f",&prcpl,&rate,&time);
    s_i = (prcpl * rate * time)/100;
    c_i = prcpl * (pow((1 + rate / 100), time)) - prcpl;
    printf("Simple Interest=%.0f, Compound Interest=%.2f",s_i,c_i);
    return 0;
}