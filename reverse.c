// Write a  program to  reverse the number which is given by user.
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int rem = num % 10;
    int reverse = reverse*10 + rem;
    num = num / 10;
    printf("%d Reversed number is: ", reverse);
}