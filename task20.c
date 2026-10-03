#include<stdio.h>
int main(){
    unsigned char a,count=0;
    printf("enter a number(0 to 255)");
    scanf("%d",&a);
    if((a&1))count++;
    if((a&4)==4)count++;
    if((a&16)==16)count++;
    if((a&64)==64)count++;
    if(count==4){
        printf("pattren matched");
        return 0;
    }
    printf("pattren not matched");
    return 0;
}