//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main()
{
    int principal, rate, time;
    float simple_interest, compound_interest, amount;
    printf("Enter rate : ");
    scanf("%d",&rate);
    printf("Enter principal : ");
    scanf("%d",&principal);
    printf("Enter time : ");
    scanf("%d",&time);
    simple_interest = principal * rate * time / 100;
    amount = principal * pow(1 + rate / 100.0, time);
    compound_interest = amount - principal;
    printf("The value of simple interest is : %.2f\n", simple_interest);
    printf("The value of compound interest is : %.2f\n", compound_interest);
    return 0;
}
