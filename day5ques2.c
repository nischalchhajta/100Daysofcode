//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main(){
    float seconds;
    int hours, minutes, remainingSeconds;
    
    printf("Enter time in seconds: ");
    scanf("%f", &seconds);
    
    hours = (int)seconds / 3600;
    minutes = ((int)seconds % 3600) / 60;
    remainingSeconds = (int)seconds % 60;
    
    printf("Time is %d:%d:%d\n", hours, minutes, remainingSeconds);
    
    return 0;
}