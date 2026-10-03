#include<stdio.h>
int main(){
    unsigned char a,b,and;
    printf("enter two numbers(0 to 255)");
    scanf("%u %u",&a,&b);
    and=a&b;
    printf("AND=%u",and);
    if((and&1))printf("first bit is on");
    if((and&2)==2)printf("second bit is on");
    if((and&4)==4)printf("third bit is on");
    if((and&8)==8)printf("fourth bit is on");
    return 0;
}