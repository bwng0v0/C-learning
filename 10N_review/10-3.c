#include<stdio.h>
#include<string.h>
#define NUM 10
#define SIZE 30
int main(){

char word[NUM][SIZE];
char find[SIZE];
int i , count=0;

for( i=0; i<NUM; i++ ){
  scanf("%s",word[i]);
}
printf("Find: ");
scanf("%s",find);

for( i=0; i<SIZE; i++ ){
 if( 0 == strcmp( word[i] , find )){
   count++;
 }
}

  printf("%d number of %s",count,find);
	return 0;
}
/*
단어 10개를 입력하고 찾는 단어를 입력해서 10개의 단어 중에 찾는 단어가 몇 개인지 출력하는 코드를 작성하라. 
입출력 예시를 참고하고 strcmp를 사용해보자.

//입출력 예시 1, Find:, 2 number of I가 출력이다.
hello world I love c coding is best I think
Find: I
2 number of I

//입출력 예시 2
My cat's name is foot foot he likes mice foot
Find: foot
3 number of foot

//입출력 예시 3
I'm Mojojojo that is my name it's what I'm called
Find: I'm
2 number of I'm

//입출력 예시 4
one two three four five six seven eight nine ten
Find: zero
0 number of zero
*/