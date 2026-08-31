//Write a program to find the LCM of two numbers.
#include<stdio.h>
int main(){
    int n1,n2,lcm,gcd,temp;
    int original_n1,original_n2;
    printf("enter n1:");
    scanf("%d",&n1);
    printf("enter n2:");
    scanf("%d",&n2);
    original_n1=n1;
    original_n2=n2;

    while(n2!=0){
        temp=n2;
        n2=n1%n2;
        n1=temp;
    }
    gcd =n1;
    lcm=(original_n1*original_n2)/gcd;
    printf("the lcm of %d and %d is %d\n",n1,n2,lcm);
return 0;
}