#include<stdio.h>

int main(){

int first,second,r1,r2;
printf("첫 번째 정수를 입력하시오 : ");
scanf("%d", &first);
printf("두 번째 정수를 입력하시오 : ");
scanf("%d", &second);

r1 = first / second;
r2 = first % second;

printf("몫은 %d\n" , r1 );
printf("이고 나머지는 %d\n" , r2);
printf("입니다.");
	return 0;
}
