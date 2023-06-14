#include<stdio.h>
int check_prime(int n);

int main(){
int n;
scanf("%d",&n);
check_prime(n);

	return 0;
}
int check_prime(int x)
{
	int its_prime=1;
	for(int i=2; i<x; i++)//탐색하는 정수가 받은정수보다 작을때 증감
	{
		//소수라면 프린트
		for(int k=2; k<i; k++) //증감하는 정수로 나누어 떨어진다면 소수 아님 표시 
		{
			if(i%k==0)
			its_prime=0;// 무죄
		}
		if(its_prime==1) //ㅋㅋㅋㅋㅋㅋㅋ its_prime=1 이라했었음
		printf("%d ",i);
		its_prime=1;
	}
}
/*
# 문제 설명
[교재 337쪽 programming 문제 5번 응용]

주어진 정수가 소수(prime)인지를 검사하는 함수, check_prime()를 작성해보자.
정수 하나(n)를 입력받고, 1부터 n까지 존재하는 소수들을 모두 출력해보자.

# 입력 예시 1
20

# 출력 예시 1
2 3 5 7 11 13 17 19

# 입력 예시 2
100

# 출력 예시 2
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
*/