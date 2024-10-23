#include<stdio.h>
void show(){
    static int a = 5;
     a++;
     printf("%d \n", a);
}
     
int main(){
    // for(int i = 0; i < 10; i++){
    //     show(i);
    // }
    show();
    show();
    show();
    
}