#include<stdio.h>
int main(){
    unsigned char num,a=0,b=0,c=0,d=0;
    printf("enter a number(0 to 255)=");
    scanf("%d",&num);
    if((num&16)==16)a=16;
    if((num&32)==32)b=32;
    if((num&64)==64)c=64;
    if((num&128)==128)d=128;
    printf("selected value=%d",a+b+c+d);
    return 0;
}