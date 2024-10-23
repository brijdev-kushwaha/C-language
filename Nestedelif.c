// Print the name of week using conditional operator
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num == 1){
        printf("Sunday");
    }
    else if(num == 2){
        printf("Monday");
    }
     else if(num == 3){
        printf("tuesday");
    }
     else if(num == 4){
        printf("Wednesday");
    }
     else if(num == 5){
        printf("Thrusday");
    }
     else if(num == 6){
        printf("Friday");
    }
    else if(num == 7){
        printf("saturaday");
    }
    else{
        printf("You are bsdk..");
    }
}