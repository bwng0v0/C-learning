#include<stdio.h>
#include<string.h>
int main(){

char str[513];
fgets(str,sizeof(str),stdin); //fgets를 쓰면 띄어쓰기를 포함한 문자열을 받을수 있구나
//  (문자열 포인터, 문자열 최대 크기, stdin)
int n = strlen(str);
for(int i=0; i<n; i++){
	printf("%c",str[i]);
	if( str[i]=='?' || str[i]=='!' || str[i]=='.' )
	break;
}

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