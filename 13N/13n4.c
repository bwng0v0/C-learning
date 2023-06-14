#include<stdio.h>
#include<stdlib.h>
int main(){

int size , i , count=0 , * array , find;

printf("Enter size: "); scanf("%d",&size); //크기 입력받기

array = (int *)malloc( sizeof(int) * size ); //크기만큼 동적 메모리 할당

printf("Enter %d numbers: ",size);  //인덱스 입력받기
for( i=0; i<size; i++ ){
	scanf("%d",&array[i]);
}

printf("Find: "); scanf("%d",&find); //찾을 정수 입력받기

for( i=0; i<size; i++ ){
	if( find == array[i] ){
		count++;
	}
}

printf("%d number of %d", count , find ); //카운트 출력

free(array);

	return 0;
}
/*
int 배열 크기를 입력한 후, 입력 크기만큼 동적 메모리를 할당한다. 배열에 int 값들을 입력 받고, 
찾는 int 값을 입력 받는다. 찾는 int 값이 배열에 몇개 있는지 출력하고, 동적 메모리를 반환한다. 
입출력 예시를 확인해서 코드를 작성하라. 

//입출력 예시 1, 입력은 3 23 56 77 77 순이다.
Enter size: 3
Enter 3 numbers: 23 56 77
Find: 77
1 number of 77

//입출력 예시 2, 입력은 4 12 85 12 36 12 순이다.
Enter size: 4
Enter 4 numbers: 12 85 12 36
Find: 12
2 number of 12
*/