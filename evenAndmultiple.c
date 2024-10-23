// write a program to check the number if number is even then check the number multiple of 100 or not 
// if number is odd then check the number is multiple of 7 or not

#include<stdio.h>
int main(){
    int num ;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num % 2 == 0){
        if(num % 100 == 0){
            printf("It is Even and also multiple of 100.");
        }else{
            printf("It is even but not divigible by 100");
        }
    }else{
        if(num % 7 == 0){
            printf("It is Odd & also divigible by 7");

        }else{
            printf("It is odd but not divigible by 7");
        }
    }
}