//Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main(){
int n;
printf("enter n");
scanf("%d",&n);
if(n%2==0){
    printf("n is even number");
}
else{
    printf("n is odd number");
}
return 0;
}
