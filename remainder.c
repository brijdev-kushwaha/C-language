// Write program to check the last digit of number divigible  or not

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number to check: ");
    scanf("%d", &num);
    int rem = num % 10;
    printf("%d \n", rem);
    if(rem % 3 == 0){
        printf(" Last digit of the given number is divigible by 3");
    }else{
        printf("it is not divigible by 3");
    }
}