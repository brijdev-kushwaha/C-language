#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    
    switch(num){
        case 1: printf("Sunday");
                break;
        case 2: printf("Monday");
                break;
        case 3: printf("Tuesday");
                break;
        case 4: printf("thrusday");
                break;
        case 5: printf("Friday");
                break;
        case 6: printf("Saturday");
                break;
        default: printf("Invailid");
    }

}