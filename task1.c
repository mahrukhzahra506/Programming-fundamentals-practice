#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    unsigned char num=rand()%255;
    printf("enter a number(0 to 255)");
    scanf("%u",&num);
    if((num&16)==16){
        printf("fifth bit is on");
        return 0;
    }
    printf("fifth bit is off");
    return 0;
}