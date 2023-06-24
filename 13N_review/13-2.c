#include<stdio.h>

int main(){

	return 0;
}
/*
아래 main 함수를 보면, 문자열을 입력 받는다. 
입력 받은 문자열은 스페이스 문자와 ‘0’~‘9’ 숫자 문자만 입력 받는다고 가정한다. (다른 문자 입력을 예외 처리할 필요 없다.) 
입력 받은 문자열에 있는 정수를 int로 변환해서 int 배열에 저장하는 to_int_array 함수를 구현하라. 
size는 int 배열의 크기이며, main 함수는 수정 불가이다. main 함수와 입출력을 참고하라.

int main(){
	char str[256];
	scanf("%[^\n]", str);
	//printf("%s\n", str);
	
	int* array;
	int size;
	array = to_int_array( &size, str);
	printf("size: %d\n", size);
	for( int i = 0 ; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	free(array);
	return 0;
}

//입출력 예시 1, 입력은 0 0 523 6621 415 이다.
0 0 523 6621 415
size: 5
0 0 523 6621 415

//입출력 예시 2, 입력은 5412 354 14 5 1 65 777 이다.
5412 354 14 5 1 65 777
size: 7
5412 354 14 5 1 65 777
*/