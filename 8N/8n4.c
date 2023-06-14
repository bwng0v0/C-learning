#include<stdio.h>
int get_divisor(int x);

int main(){
int n;
scanf("%d",&n);
get_divisor(n);
	return 0;
}

int get_divisor(int x)
{
	for(int i=1; i<=x; i++)
	{
		if(x%i==0)
		{
			printf("%d ",i);
		}
	}
}
/*
# 문제 설명
[교재 336쪽 programming 문제 4번 응용]

주어진 정수의 약수를 모두 찾아내는 함수, get_divisor()를 작성해보자.

# 입력 예시 1
8

# 출력 예시 1
1 2 4 8

# 입력 예시 2
9

# 출력 예시 2
1 3 9
*/