#include<stdio.h>
typedef struct time{
int hour;
int min;
int sec;
} TIME;
int main(){

TIME T1, T2 ,T3;

scanf("%d %d %d",&T1.hour,&T1.min,&T1.sec);
scanf("%d %d %d",&T2.hour,&T2.min,&T2.sec);

T3.hour = T1.hour - T2.hour;
T3.min = T1.min - T2.min;
T3.sec = T1.sec - T2.sec;

if( T3.hour < 0 )
T3.hour = -T3.hour;
if( T3.min < 0 )
T3.min = -T3.min;
if( T3.sec < 0 )
T3.sec = -T3.sec;
  
printf("%d %d %d",T3.hour,T3.min,T3.sec);

  
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