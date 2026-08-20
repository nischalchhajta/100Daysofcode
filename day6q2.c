//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
if(n>0){ 
    printf("n is positive number");
}
 else{
    if(n<0){
      printf("n is negative number");  
    }
    else{
            printf("n is zero number");
        }
    }
 
 return 0;

}

