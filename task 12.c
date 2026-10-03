#include<stdio.h>
int main(){
    unsigned char a;
    printf("enter a number(0 to 255)");
    scanf("%u",&a);
    if((a&4)==4 && (a&32)==32){
        printf("both selected bits are on");
        return 0;
    }
    printf("both bits are not on");
    return 0;
}