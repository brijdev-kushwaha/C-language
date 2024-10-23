#include<stdio.h>

enum{SUN,MON,TUE,WED = 100,THR,FRI,SAT};
enum{FALSE,TRUE};

int main(){
    printf("SUN = %d \n" , SUN);
    printf("MON = %d \n" , MON);
    printf("TUE = %d \n" , TUE);
    printf("THR = %d \n" , THR);

}               