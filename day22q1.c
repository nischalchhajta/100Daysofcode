//Write a program to check if a number is a strong number.
#include<stdio.h>
int main(){
   int num,originalnum,rem,sum=0;
   printf("enter num");
   scanf("%d",&num);
   
   originalnum = num;

   while(num>0){
    rem = num%10;
    int fact =1;
    for(int i=1; i<=rem; i++){
        fact *= i;
    }
    sum += fact;
    num /=10;
   }
if(sum==originalnum){
    printf("%d is a strong number",originalnum);
}else{
    printf("%d is not a strong number",originalnum);
}
return 0;
}