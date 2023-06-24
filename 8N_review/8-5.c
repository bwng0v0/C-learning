#include<stdio.h>
void check_prime(int n){

  int its_prime=1;
  for( int i=2; i<n; i++ ){
    if( n%i == 0 ){
      its_prime=0;
      break;
    }
  }

  if( its_prime == 1 ){
    printf("%d ",n);
  }
    
}

int main(){

int n, i;
scanf("%d",&n);

  for( i=2; i<=n; i++ ){
    check_prime(i);
  }
  
	return 0;
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