//Write a program to find the sum of digits of a number.

#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter n");
    scanf("%d",&n);
    while(n>0){
        sum +=n%10;
        n/=10;
    }
    printf("sum is %d",sum);
    return 0;
}