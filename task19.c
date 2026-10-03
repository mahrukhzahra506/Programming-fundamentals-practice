#include<stdio.h>
int main(){
    unsigned char a;
    printf("enter a lowercase letter=");
    scanf("%c",&a);
    if((a&32)==32)printf("lower case=%c,%d",a,a);
    printf("\nuppercase=%c,%d",a&223,a&223);

    return 0;
}