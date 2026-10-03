#include<stdio.h>
int main(){
    unsigned char a;
    printf("enter a lowercase letter");
    scanf("%c",&a);
    printf("ASCII value=%d\n",a);
    if((a&32)==32)printf("bit 32 is on");
    if((a&32)==0)printf("bit 32 is off");
    printf("\nuppercase ASCII=%d",a-32);
    return 0;
}