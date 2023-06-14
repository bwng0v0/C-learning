#include<stdio.h>

int main(){
    char x;
scanf("%c",&x);
if(x>=65 && x<=90)
printf("대문자");
else if(x>=97 && x<=122)
printf("소문자");
else printf("영문자 아님");
	return 0;
}