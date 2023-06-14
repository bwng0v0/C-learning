#include<stdio.h>
#include<string.h>
struct complex {
	int a;
	int b;
};

int main(){

struct complex compl;
struct complex compl2;
struct complex complresult;
char one[20];
char two[20];	


scanf("%s",one);
scanf("%s",two);

compl.a = (int)(one[0])-48;
compl2.a = (int)(two[0])-48;
compl.b = (int)(one[4])-48;
compl2.b = (int)(one[4])-48;

complresult.a = compl.a + compl2.a;
complresult.b = compl.b + compl2.b;

printf("%d.00+%d.00i",complresult.a,complresult.b-1);


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
