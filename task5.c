#include<stdio.h>
int main(){
    char a;
    printf("enter a uppercase letter");
    scanf("%c",&a);
    printf("letter=%c",a);
    printf("\nASCII value=%d",a);
    printf("\nlowercase ASCII=%d",a+32);
    return 0;
}