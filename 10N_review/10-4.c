#include<stdio.h>
#include<string.h>
int main(){

char str[30][30];
int stop=0 ,i,j,size=0;
for( i=0; ;i++ ){
scanf("%s",str[i]);


for( j=0; j<strlen(str[i]); j++ ){
  if( str[i][j] == '.' ){
    str[i][j] = '\0';
    stop=1;
    size = i;
    break;
  }
}

  if( stop==1 )
  break;  
}

for( i=size; i>0; i-- ){
  printf("%s ",str[i]);
}
printf("%s.",str[0]);
  
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