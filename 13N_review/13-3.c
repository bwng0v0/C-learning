#include<stdio.h>

int main(){

	return 0;
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