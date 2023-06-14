#include<stdio.h>
struct time
{
	int hour;
	int min;
	int sec;
};

int main(){
//변수 선언
struct time a,b,result;
scanf("%d %d %d",&a.hour,&a.min,&a.sec);
scanf("%d %d %d",&b.hour,&b.min,&b.sec);

//두 시간의 차 계산
result.hour = a.hour - b.hour;
result.min = a.min - b.min;
result.sec = a.sec - b.sec; 

// 음수라면 양수로 변환 (차를 차이값으로 변환)
if( result.hour < 0 )
result.hour = -(result.hour);
if( result.min < 0 )
result.min = -(result.min);
if( result.sec < 0 )
result.sec = -(result.sec);

//조건을 만족한다면 프린트
//if( (0<a.hour && a.hour<23) && (0<a.min && a.min<59) && (0<a.sec&&a.sec<59) )
//if( (0<b.hour && b.hour<23) && (0<b.min && b.min<59) && (0<b.sec&&b.sec<59) )
printf("%d %d %d", result.hour, result.min, result.sec);

	return 0;
}
/*
## 문제 설명
구조체를 이용하여 현재 시각을 표현한다. 

사용자로부터 2개의 시각을 입력 받아서,
두 시각 사이의 차이를 계산하여,
출력하는 프로그램을 작성한다.

단, 입력 받는 2개의 시각은 어떤 것이 먼저이고 
어떤 것이 나중인지 모른다. 

즉, 첫 번째 입력으로 주어지는 시각이 
두 번째로 주어지는 시각보다 나중의 시간일 수 있다.  

시로 주어지는 숫자는 0보다 크고 23보다 작다.
분으로 주어지는 숫자는 0보다 크고 59보다 작다.
초로 주어지는 숫자는 0보다 크고 59보다 작다.

## 입력
시 분 초
시 분 초

## 출력
시 분 초

## 입력 예시 1
1 10 20
3 20 30

## 출력 예시 1
2 10 10

## 입력 예시 2
3 20 30
1 10 20

## 출력 예시 2
2 10 10
*/