#include<stdio.h>
int main(){
    unsigned char a;
    printf("enter a number(0 to 255)");
    scanf("%u",&a);
    if((a&24)<=7)printf("both bits are off");
    if((a&24)>7 && (a&24)<=15)printf("fourth bit is on");
    if((a&24)>15 && (a&24)<=23)printf("fifth bit is on");
    if((a&24)>=24)printf("both bits are on");
    return 0;
}