#include<stdio.h>
int main(){
    int n;
    int product =1;
    printf("enter n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            product = product*i;
        }
    }
    printf("product is %d\n",product);
    return 0;
}