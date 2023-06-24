#include<stdio.h>
#define size 5
int main(){

int arr[size], i ;
int *p;
for( i=0; i<size; i++ ){
scanf("%d",&arr[i]);
}

p = arr;

for( i=size-1; i>=0; i-- ){
printf("%d ",p[i]);
}
  
	return 0;
}
/*
## 문제 설명
크기가 5인 정수 배열을 입력받고, 포인터를 이용하여 배열에 저장된 값을 역순으로 출력하는 프로그램을 작성하라.
반드시 포인터를 이용하는 프로그램을 작성하라.

## 입력 예시 
1 2 3 4 5

## 출력 예시 
5 4 3 2 1

## 입력 예시 
25 36 86 95 45

## 출력 예시 
45 95 86 36 25
*/