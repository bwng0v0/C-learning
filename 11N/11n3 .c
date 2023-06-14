#include<stdio.h>

typedef struct complex { //구조체 자료형(데이터타입) 정의
	double a;
	double b;
}COMPLEX;

int main(){ 
//디버그1 : scanf로 받는 변수에 주소연산자&을 빼먹음 , stdio.h 파일로 들어가는 버그해결
//디버그2 : 부호를 결정하고 계산을 실행했어야함 , -부호를 인식못하는 버그해결
COMPLEX A,B;
char signA,signB,tmp;
double sum_a,sum_b;

scanf("%lf%c%lf%c",&A.a,&signA,&A.b,&tmp); //문자열을 이렇게 처리할수도있구나@@
scanf("%lf%c%lf%c",&B.a,&signB,&B.b,&tmp);

if( signA == '-' ) // 부호가 -라면 음수로 변환
A.b = -A.b;
if( signB == '-' )
B.b = -B.b;

sum_a = A.a + B.a; //합 구하기
sum_b = A.b + B.b;

if( sum_b > 0 ){ // -와 다르게, 양수일때 +는 직접출력해줘야함
	printf("%.2lf+%.2lfi",sum_a,sum_b);
} else printf("%.2lf%.2lfi",sum_a,sum_b);

	return 0;
}
/*
## 문제 설명
두 개의 복소수를 더하는 프로그램을 작성해 보자. 
단, 복소수를 구조체로 정의하고 구현하라. a, b, c, d는 실수이다. 

a+bi와 c+di의 덧셈은 다음과 같다.
(a + bi) + (c + di) = (a + c) + (b + d)i

## 입력
입력은 아래와 같이 주어진다. 
첫번째 줄에는 첫번째 복소수가 
두번째 줄에는 두번째 복소수가 아래의 형식으로 주어진다.
(복소수 입력에는 공백이 없음)

a+bi
c+di

## 출력
(a+c)+(b+d)i
(복소수 출력에도 공백이 없음)

## 입력 예제 1
1.0+3.0i
5.0+2.0i

## 출력 예제 1
6.00+5.00i
*/
