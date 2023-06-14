#include<stdio.h>
#include<string.h>
#define word 20
#define number 30
int main(){

char str[number][word]; //넘버만 int배열은 안되나
int i=0,j=0,n,stop=0;
for(;;){


	scanf("%s",str[i]); //단어 단위로 받기
	
	n = strlen(str[i]);

	for(j=0; j<n; j++){ // 문자열 내에 . 이 있다면 입력 중지 그리고 .제거
		if( str[i][j] == '.' ){
		str[i][j]=0;
		stop=1;
		break;
		}
	}

if( stop == 1 ) //받은 문자열에 .이 있었다면 브레이크
	break;

	i++; //여기까지 왔다는건 .이 없는 문자열을 입력받았다는것. 2차원 배열중 행 증감.
}
//여기부터 역으로 출력
for(i=i; i>=0; i--){ //수정: 범위 i=i를 i=i-1로 수정해서 쓰레기값이 나오고 시작하던걸 없앰
//재수정: 메인함수 코드 순서를 바꿔, .이 포함된 문자열을 받고 i를 증감시키지 않고 탈출함으로써
//      쓰레기 값이 들어간 행이 i범위에 포함되는걸 없앰.
printf("%s",str[i]);

if( i>0 ) //마지막 문자열이 아니라면, 문자열 출력후 띄어쓰기
printf(" ");

}
printf("."); //문자열 역순으로 출력을 마치고 온점출력
	return 0;
}
/*
마침표 ‘.’로 마감되는 문장을 입력하고 문장의 단어들을 뒤에서부터 출력하라. 
문자를 뒤에서부터 출력하는 것이 아니라, 단어를 뒤에서 출력한다.
문장 부호는 ‘.’만 사용하고, 단어는 스페이스로만 나뉘어진다고 가정하자.
마침표 출력도 확인하자.

//입출력 예시 1: 입력은 “hello world.”이고 출력은 “world hello.”이다.
hello world.
world hello. 

//입출력 예시 2
one two three for five once i caught a fish alive.
alive fish a caught i once five for three two one.

//입출력 예시 3
my name is MoJoJoJo that is the name I used for identifying myself which is I who is called MoJoJoJo.
MoJoJoJo called is who I is which myself identifying for used I name the is that MoJoJoJo is name my.
*/