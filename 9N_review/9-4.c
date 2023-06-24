#include<stdio.h>
int get_array_sum(int *arr,int size){
  int x=0;
  for( int i=0; i<size; i++ ){
    x = x + arr[i];
  }
  return x;
}

int main(){

int arr[5] , i ,sum;

for( i=0; i<5; i++ ){
scanf("%d",&arr[i]);
}

sum = get_array_sum(arr,5);

printf("%d",sum);
  
	return 0;
}
/*
## 문제 설명
5개의 원소를 갖는 1차원 배열을 받아서 배열 요소들의 합을 계산하는 함수
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