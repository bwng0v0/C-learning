#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 20
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
		itoa( arr[i], tmp_str[i] , 10 ); //tmp str에 3개 u int 각각저장
	}

	for( i=0; i<3; i++ ){
	len_sum = strlen( tmp_str[i] ); //3문자열의 길이 구하기 
	}

	char *str;
	str = (char*)malloc( len_sum );


	strcpy( str , tmp_str[0] );

	for( i=0; i<3; i++ ){
	str[strlen(str)+1] = ' ';
	str[strlen(str)+2] = '\0';
	strcat( str , tmp_str[i] );
	}
	
	*str_size = strlen(str);
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