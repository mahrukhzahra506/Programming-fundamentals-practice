#include<stdio.h>
int main(){
    unsigned char a;
    printf("enter a number(0 to 255)");
    scanf("%u",&a);
    if((a&12)<=3)printf("selected bits value=0");
    if((a&12)>3 && (a&12)<=7)printf("selected bits value=4");
    if((a&12)>7 && (a&12)<12)printf("selected bits value=8");
    if((a&12)>=12)printf("selected bits value=12");
    return 0;
}