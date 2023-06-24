#include<stdio.h>

int main(){

	return 0;
}
/*
## 문제 설명
삼각형, 사각형, 원을 동시에 표현할 수 있는 공용체를 사용하라. 
삼각형은 밑변과 높이, 사각형은 가로와 세로, 원은 반지름만 저장하도록 하라. 

현재의 공용체가 표현하고 있는 도형의 종류는 열거형 변수를 이용하여 나타내라. 
도형의 종류와 도형의 데이터를 입력 받아, 도형의 면적을 계산하는 프로그램을 작성하라.
원의 면적을 계산할 때 는 3.14로 계산한다.

- 조건1: 공용체를 사용해야 함.
- 조건2: 열거형 변수를 사용해야 함.

아래의 코드 힌트를 사용할 것.

## 입력
- 첫 번째 줄은 도형의 타입이 주어진다. 
0은 삼각형, 1는 사각형, 2는 원을 의미한다.

- 두번째 줄은 도형별 데이터가 주어진다. 
삼각형의 경우: 밑변 높이 
사각형의 경우: 가로 세로
원의 경우: 반지름

## 출력
도형의 면적

## 입력 예시 1
0
10.0 5.0

## 출력 예시 1
25.000000

## 입력 예시 2
1
4.0 4.0

## 출력 예시 2
16.0000000

## 입력 예시 3
2
5.0

## 출력 예시 3
78.500000

## 코드 힌트

enum type {TRI, REC, CIR};

struct Triangle {
	double w;
	double h;
};
struct Rectangle {
	double x;
	double y;
};
struct Circle {
	double r;
};
union P {
	struct Triangle T;
	struct Rectangle R;
	struct Circle C;
};
struct Polygon {
	enum type kind;
	union P poly;
};
int main()
{
    ???
    ???

    return 0;
}
*/