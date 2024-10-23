#include<stdio.h>
int main()
{
    extern int num;
    printf("%d", num);
    

}
void frist(){

}
extern int num;
void second(){
    extern int num;
    printf("%d", num);
}
void third(){
    
}
int num = 50;