#include<stdio.h>
int main(){
    char a;
    printf("enter a uppercase letter");
    scanf("%c",&a);
    printf("lowercase=%c",a+32);
    return 0;
}