//Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a\n"); 
    printf("enter b\n");
    printf("enter c\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b && a>c){
        printf("Largest is %d",a);
    }
    if(b>a && b>c){
        printf("Largest is %d",b);
    }
    else{
        printf("Largest is %d",c);
    }
    return 0;
}