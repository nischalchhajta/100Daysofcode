//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
int main(){
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("Character is an upper case alphabet");
    }
    else if(ch>='a' && ch<='b'){
        printf("charactr is lower case alphabet");
    }
    else if(ch>='0' && ch<='9'){
        printf("character is an digit");
    }
    else{
        printf("charcter is special character");
    }
    return 0;
}