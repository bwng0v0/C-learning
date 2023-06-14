#include<stdio.h>

int main(){

int a,b,x,y;
printf("첫 번째 정수를 입력하시오 : ");
scanf("%d",&a);
printf("두 번째 정수를 입력하시오 : ");
scanf("%d",&b);

x=a/b;
y=a%b;
printf("몫은 %d이고 나머지는 %d입니다.",x,y);

	return 0;
}
/*
# 입력 예시
첫 번째 정수를 입력하시오 : 11
두 번째 정수를 입력하시오 : 4

# 출력 예시
몫은 2이고 나머지는 3입니다.
*/