//Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.
#include<stdio.h>
int main(){
    int days;
    int fine=0;
     
    printf("enter number of days late:");
    scanf("%d",&days);
     if(days<0){
        printf("no fine.Book returned on time.\n");
     }
     else if(days>30){
        printf("Membership Cancelled.\n ");
     }
     else{
        if(days<=5){
            fine=days*2;
        }
        else if(days<=10){
            fine =10+(days-5)*4;
        }
        else{
            fine=30+(days-10)*6;
        }
        printf("total fine:%d\n",fine);
     }
     return 0;
     }