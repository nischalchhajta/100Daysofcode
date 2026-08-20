//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main(){
    float costprice,sellingprice,profit,loss,percentage;
    printf("enter cost price");
    scanf("%f",&costprice);
    printf("enter selling price");
    scanf("%f",&sellingprice);
    if(costprice>sellingprice){
        loss=costprice-sellingprice;
        percentage=(loss/costprice)*100;
        printf("loss is %f\n",loss);
        printf("loss percentage is %f\n",percentage);

    }
    else if(sellingprice>costprice){
        profit=sellingprice-costprice;
        percentage=(profit/costprice)*100;
        printf("profit if %f",profit);
        printf("profit percentage is %f",percentage);

    }
    else{
        printf("no profit,no loss.\n");
    }
    return 0;
}
