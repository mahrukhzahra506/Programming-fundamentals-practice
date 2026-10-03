#include<stdio.h>
int main(){
    unsigned char num;
    printf("enter a number(0 to 255)");
    scanf("%u",&num);
    if(((num&7)==0))printf("last three bits=0");
    if(((num&7)==1))printf("last three bits=1");
    if(((num&7)==2))printf("last three bits=2");
    if(((num&7)==3))printf("last three bits=3");
    if(((num&7)==4))printf("last three bits=4");
    if(((num&7)==5))printf("last three bits=5");
    if(((num&7)==6))printf("last three bits=6");
    if(((num&7)==7))printf("last three bits=7");
    return 0;
}