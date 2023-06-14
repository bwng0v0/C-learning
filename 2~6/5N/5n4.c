#include<stdio.h>

int main() {
char c;

scanf("%c", &c);

if(c >= 'A' && c <= 'Z') {
printf("대문자");
}
else if(c >= 'a' && c <= 'z') {
printf("소문자");
}
else {
printf("영문자 아님");
}

return 0;
}