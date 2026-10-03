#include<stdio.h>
int main(){
    unsigned char a;
    printf("enter an uppercase letter");
    scanf("%c",&a);
    printf("ASCII value=%d\n",a);
    if((a&32)==32){
        printf("bit 32 is on");
        return 0;
    }
    printf("bit 32 is off");
    return 0;
}