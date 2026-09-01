//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include<stdio.h>
int main(){
    int n;
    float sum =0;
     printf("enter the number of terms:");
     scanf("%d",&n);
      for(int i=1;i<=n;i++){
        sum=sum +(2.0*i)/(4.0*i-1.0);
      }
      printf("the sum of the series is: %f",sum);
      return 0;
}