#include<stdio.h>
int main(){
    int a,b;
    printf("enter a lowercase letter=");
    scanf("%c",&a);
    b=a&223;
    printf("\nuppercase letter is=%c",b);
    printf("\nASCII value of uppercase=%d",b);
    return 0;
}