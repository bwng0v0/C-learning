#include<stdio.h>
#include<stdlib.h>
//동적 메모리 할당 실험
int main(){

int size; //정수형 변수 선언
scanf("%d",&size); //정수형 변수에 "크기" 저장

int* array; // 정수형 포인터변수 선언

array = (int*)malloc( size * (sizeof(int)) );

for( int i=0; i<size; i++ ){
	array[i] = i+1;
}

for( int i=0; i<size; i++ ){
	printf("%d ",array[i]);
}
free(array);
	return 0;
}