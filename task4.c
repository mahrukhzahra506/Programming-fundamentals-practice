#include<stdio.h>
int main(){
    unsigned char num;
    printf("enter a number(0 to 255)");
    scanf("%u",&num);
    if(((num&15)==0))printf("last four bits=0");
    if(((num&15)==1))printf("last four bits=1");
    if(((num&15)==2))printf("last four bits=2");
    if(((num&15)==3))printf("last four bits=3");
    if(((num&15)==4))printf("last four bits=4");
    if(((num&15)==5))printf("last four bits=5");
    if(((num&15)==6))printf("last four bits=6");
    if(((num&15)==7))printf("last four bits=7");
    if(((num&15)==8))printf("last four bits=8");
    if(((num&15)==9))printf("last four bits=9");
    if(((num&15)==10))printf("last four bits=10");
    if(((num&15)==11))printf("last four bits=11");
    if(((num&15)==12))printf("last four bits=12");
    if(((num&15)==13))printf("last four bits=13");
    if(((num&15)==14))printf("last four bits=14");
    if(((num&15)==15))printf("last four bits=15");
    return 0;
}