#include<stdio.h>
int main(){
    unsigned char a;
    printf("emter a number(0 to 255)");
    scanf("%u",&a);
    if((a&15)>7){
        printf("last 4 bits have bit 4 on");
        return 0;
    }
    printf("last 4 bits have bit 4 off");
    return 0;
}