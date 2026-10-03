#include<stdio.h>
int main(){
    unsigned char a;
    printf("enter a number(0 to 255)");
    scanf("%u",&a);
    if((a&3)==0)printf("last two bits are off 00");
    if((a&3)==1)printf("last bit is on 01");
    if((a&3)==2)printf("second last bit is on 10");
    if((a&3)==3)printf("last two bits on 11");
    
    return 0;
}