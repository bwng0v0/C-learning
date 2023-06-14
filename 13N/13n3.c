#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//디버그1 : 배열을 복사할때 while( str[i] !=0 )에서 for( int i=0; i<=strlen(str); i++ )로 변경함
//안정화 : 문자열이 끝남을 알리는 NULL문자 자리를 위해, 동적메모리 할당 범위를 4byte 더 할당하고, 복사할때 범위를 strlen에 +1을 더함
int *copy(char *c);

int main(){
	char str[256];
	scanf("%[^\n]", str); //스캔 집합 형식지정자 %[] , %[^]
	//printf("%s\n", str);
	
	int *c = copy(str);
	
	int i = 0;
	while( c[i] != 0){
		printf("%c", c[i]);
		i++;
	}
	printf("\n");
	free(c);
	return 0;
}
int *copy(char *str){

	int *c;
	c = (int*)malloc( sizeof(int*) * (strlen(str)+1) ); //동적 메모리를 할당하고 (NULL값 자리+1)

	for( int i=0; i<=strlen(str)+1; i++ ){
		c[i] = str[i];
	}

	return c;
}

/*
아래 main 함수를 보면, 문자열을 입력 받아, 문자열을 int 배열에 카피하고 int 배열을 char로 출력하는 코드가 있다.
main 함수에서 사용되는 copy 함수를 정의하라. copy 함수는 문자열을 입력 받아 char들을 int 배열에 저장한다.
main 함수는 수정 불가하다.

int main(){
	char str[256];
	scanf("%[^\n]", str);
	//printf("%s\n", str);
	
	int* c = copy(str);
	
	int i = 0;
	while( c[i] != 0){
		printf("%c", c[i]);
		i++;
	}
	printf("\n");
	free(c);
	return 0;
}

//입출력 예시 1
char can be saved as int
char can be saved as int

//입출력 예시 2
int can be printf as char
int can be printf as char
*/