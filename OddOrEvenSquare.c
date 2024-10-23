// Write a program to find the square if number is even  or find the cube if number is odd
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int rem = num % 10;
    if (rem % 2 == 0){
        printf("square = %d ", rem * rem);

    }else{
        printf("cube =  %d ", rem * rem* rem);
    }
}