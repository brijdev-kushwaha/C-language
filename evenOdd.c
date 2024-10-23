// write a program to find the given number is even or odd.....

#include<stdio.h>
int main(){
    int num;
    printf("Please,Enter the number:");
    scanf("%d",&num);
    
    // int even = num % 2 == 0;
    // int odd = num % 2 == 1;

    if(num % 2 == 0){
      printf(" %d is even number:",num);
    }else{
      printf("  %d is Odd number" ,num);
    }
  
   
}