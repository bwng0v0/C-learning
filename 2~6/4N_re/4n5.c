#include<stdio.h>

int main(){

double x;

printf("정수를 입력하시오: ");
scanf("%lf",&x);
x=((x*x*x)-20)/(x-7);
printf("수식의 값은 %lf",x);
printf("입니다.");
	return 0;
}

/*
다음 수식의 값을 계산하여서 화면에 출력하라. x 값은 사용자로부터 입력받는다.
f(x)=(x^3-20)/(x-7)

# 입력 예시
정수를 입력하시오: 10

# 출력 예시
수식의 값은 326.666667입니다.
*/