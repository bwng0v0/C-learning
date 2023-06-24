#include<stdio.h>

int main(){

	return 0;
}
/*
아래 main 함수에서는 unsigned int 3개를 입력 받는다. 
to_str은 3개의 unsigned int 배열을 문자열로 변환해준다. 
str_size는 스페이스와 숫자 char의 수이다. 
main 함수는 수정 불가이며, main함수와 입출력을 참고하여 to_str함수를 구현하라.

int main(){
	unsigned int arr[3];
	scanf("%u %u %u", arr, arr+1, arr+2);
	
	int str_size;
	char *str = to_str( &str_size, arr);
	printf("str_size: %d\n", str_size);
	printf("%s\n", str);
	free(str);
	return 0;
}

//입출력 예시 1, 입력은 1 2 3이다.
1 2 3
str_size: 5
1 2 3

//입출력 예시 2, 입력은 214567 1245 0이다.
214567 1245 0
str_size: 13
214567 1245 0
*/