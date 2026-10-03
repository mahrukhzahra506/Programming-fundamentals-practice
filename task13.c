#include<stdio.h>
int main(){
    unsigned int a;
    printf("enter a number(0 to 255)");
    scanf("%d",&a);
if((a&7)==0)printf("last three bits=000");
if((a&7)==1)printf("last three bits=001");
if((a&7)==2)printf("last three bits=010");
if((a&7)==3)printf("last three bits=011");
if((a&7)==4)printf("last three bits=100");
if((a&7)==5)printf("last three bits=101");
if((a&7)==6)printf("last three bits=110");
if((a&7)==7)printf("last three bits=111");
    return 0;
}