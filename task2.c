#include<stdio.h>
int main(){
    unsigned int num;
    printf("enter a number(0 to 255)");
    scanf("%u",&num);
    if((num&64)==64){
        printf("seventh bit is on");
        return 0;
    }
    printf("seventh bit is off");
    return 0;
}