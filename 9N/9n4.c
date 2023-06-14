#include<stdio.h>

int get_arry_sum(int *A, int size){
int total=0;//변수는 꼭 초기화 후 사용!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
for(int i=0; i<size; i++)
total+=A[i];

	return total;//메인함수의 변수이름과 기타함수의 변수이름과 같으면 안되나?
}

int main(){
int n=5;
int i, list[n], sum;
for(i=0; i<5; i++){
	scanf("%d",&list[i]);
}

sum= get_arry_sum(list, n);

printf("%d",sum);

	return 0;
}

/*
## 문제 설명
5개의 원소를 갖는 1차원 배열을 받아서
배열 요소들의 합을 계산하는 함수
int get_arry_sum(int *A, int size)을 구현하고 합을 출력하는 프로그램을 작성하라.

## 입력 예시 
50 -69 85 20 -100

## 출력 예시 
-14

## 입력 예시
1 2 3 4 5

## 출력 예시 
15
*/