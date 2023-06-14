#include<stdio.h>
int factorial(int n){
	if(n<=1)
	return 1;

	return n*factorial(n-1);
}

int main(){
int x,result;
scanf("%d",&x);
result= factorial(x); //마지막에 1이 반환되는데, 왜 1이 저장되지않고 
					 //반환값*반환값*반환값 이렇게 되는거지
printf("%d",result);
	return 0;
}
/*
팩토리얼(!)은 다음과 같이 정의된다.
n! = n * (n-1) * (n-2) * ... * 2 * 1
즉, 5! = 5 * 4 * 3 * 2 * 1 = 120 이다.
n이 입력되면 n!의 값을 출력하시오.

* 재귀 함수를 사용하여 풀기
입력 예시 1
5
출력 예시 1
120
입력 예시 2
3
출력 예시 2
6
*/