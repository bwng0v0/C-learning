#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 20
// oj가 itoa를 컴파일 못해서 sprintf로 해결 sprintf가 더 좋은듯
char *to_str( int*str_size, unsigned int *arr );

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
char *to_str( int*str_size, unsigned int *arr ){
	
	int i, len_sum=2+1; //공백,널 문자 자리 포함
	char tmp_str[3][size]; //3행 20열 2차원 문자 배열

	for( i=0; i<3; i++ ){
		sprintf( tmp_str[i] , "%d" , arr[i] );
	}

	for( i=0; i<3; i++ ){
	len_sum = len_sum + strlen(tmp_str[i]); // 3개 문자열의 길이 구하기 
	}
	
	char *str;
	str = (char*)malloc( sizeof(char)*len_sum ); // 2(사이의 공백) + 1(널 문자) + 문자열 길이 만큼 메모리할당


	strcpy( str , tmp_str[0] );
	for( i=1; i<3; i++ ){ //범위 설정 잘못함 첫 문자열은 이미 넣고 시작해서 1부터가 맞음
	strcat( str , " " );
	strcat( str , tmp_str[i] );
	}
	
	*str_size = strlen(str); //size도 전달 해주고
	return str;
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