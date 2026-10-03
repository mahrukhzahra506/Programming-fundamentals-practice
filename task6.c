#include<stdio.h>
int main(){
    char a;
    printf("enter a lowercase letter");
    scanf("%c",&a);
    printf("letter=%c",a);
    printf("\nASCII value=%d",a);
    printf("\nuppercase ASCII=%d",a-32);
    return 0;
}