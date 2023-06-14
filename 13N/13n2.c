#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int* to_int_array( int *size, char *str );


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


int* to_int_array( int *size, char *str ){ //문자열의 이름 str은 str[0]을 가리키는 포인터
	//변수, 배열 선언 (이름들이 맘에 안듬)
	int *array , i=0 , tmp_count=0 , intsize=0;
	char tmp_str[20][20];

	*size = strlen(str);
	array = (int*)malloc( sizeof(int) * ((*size)+1) );

	//char 배열 -> int 배열
	/*
	입력받은 문자열을 문자단위로 검사(문자열 끝까지),
	문자를 임시로 2차원 배열에 저장, 공백문자가 나온다면 다음행에 저장시작.
	2차원 배열에 나누어져 저장된 문자열들을 atoi로 array에 저장.
	*/
	for( ;; ){
		if( str[i] == '\0' )//문자가 NULL이 아니라면
		break;
		
		if( str[i] == ' ' ){//char를 tmp_str[i][0]에 저장 공백문자가 나오면 i증감
		intsize++; //공백문자가 나오면 저장할 임시2차원 배열의 행 증감
		tmp_count=0; //임시2차원 배열의 열을 0으로 초기화 (약간 줄내림 느낌)
		} else{
		tmp_str[intsize][tmp_count] = str[i];//임시 2차원 인덱스에 현재 str인덱스 저장
		tmp_count++;// 문자 저장위치를 다음 인덱스로 이동
		}

		i++;//검사할 str문자열 인덱스 증감
	}
	
	intsize++;//행 역할에서 int배열 크기 역할로 전환

	for( i=0; i<intsize; i++ ){
		array[i] = atoi(tmp_str[i]);
	}

	*size = intsize;
	return array; //포인터변수 = 주소값을 저장
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