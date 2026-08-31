//Write a program to find the product of odd digits of a number.
#include<stdio.h>
int main(){
    int n, digit, product=1;

    printf("enter a n");
    scanf("%d",&n);

    while(n>0){
        digit=n % 10;

        if(digit % 2!=0){
            product *= digit; 
           
        }
        n /=10;
    }
     printf("no odd digits ");
    printf("(assume product of odd digits):%d\n",product);
    return 0;
}