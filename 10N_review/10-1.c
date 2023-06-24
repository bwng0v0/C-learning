#include<stdio.h>
#include <string.h>
int main(){

char str[512];
scanf("%[^\n]",str);

int i , size;
size = strlen(str);

  for( i=0; i<size; i++ ){
    if( str[i] =='.' || str[i] =='!' || str[i] =='?' ){
      str[i+1] = '\0';
    }
  }

printf("%s",str);
  
	return 0;
}
/*
‘.’ ‘!’ ‘?’ 마침표, 느낌표, 물음표까지 입력 받고 입력 받은 내용을 string으로 출력하라. 
문자열 크기는 최고 512이다.

//입력 출력 예시 1
Hello world!!!
Hello world!

//입력 출력 예시 2
You nam saying??
You nam saying?

//입력 출력 예시 3
My cat’s name is Foot-Foot. He likes to roam around.
My cat’s name is Foot-Foot. 
*/