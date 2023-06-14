#include<stdio.h>

int main(){

double a,b;
int output;
printf("2개의 실수를 입력하시오: ");
scanf("%lf %lf",&a,&b);

output=(int)a+(int)b;
printf("정수부의 합 = %d",output);
	return 0;
}

/*
사용자에게 2개의 실수를 받아서 정수부를 더한 값을 출력하는 프로그램을 작성하자.
단, 출력은 '합의 정수부'가 아니고 '정수부의 합'이다.

# 입력 예시
2개의 실수를 입력하시오: 2.38 3.14

# 출력 예시
정수부의 합 = 5
*/