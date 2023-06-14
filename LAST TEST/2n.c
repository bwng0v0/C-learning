#include<stdio.h>

int main(){

float a,b,sum;

scanf("%f %f",&a ,&b);
printf("%.2f %.2f",a,b);
printf("%d %d\n",(int)a,(int)b);
printf("%c %c\n",(char)a,(char)b);

	return 0;
}

/*
32와 90 사이의 float 값 2개를 입력 받아 합을 구하고, 
2개의 float 값과 합을 소수점 2자리까지표현되는 
  실수, 10진수, char 값으로 출력하라. 
입출력을 확인하고 + = 연산자도 출력한다. 
(숫자 범위에 벗어나도 예외 처리 코딩은 작성할 필요 없다.)

//입출력 예시 1, 입력은 33 89이고 나머지는 출력이다.
33 89
33.00 + 89.00 = 122.00
33 + 89 = 122
! + Y = z
  */