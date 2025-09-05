// Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include<stdio.h>
int main()
{
    int a , b , temp_storage;
    printf("Any two numbers to swap");
    scanf("%d %d",&a,&b);
    temp_storage = a;
    a = b;
    b = temp_storage;
    printf("after swap: %d %d",a,b);
    return 0;
}