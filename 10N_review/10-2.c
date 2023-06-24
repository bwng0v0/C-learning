#include<stdio.h>
#include <string.h>
int main(){

int small=0,big=0,number=0,len=0;
char str[512];
int i;

for(;;){
small=0;big=0;number=0;len=0;
printf("Enter password: ");
scanf("%s",str);

for( i=0; i<strlen(str); i++ ){
  
  if( 'a' <= str[i] && str[i] <= 'z' ){
    small = 1;
  }else if( 'A' <= str[i] && str[i] <= 'Z' ){
    big = 1;
  }else if( '0' <= str[i] && str[i] <= '9' ){
    number = 1;
  }
  if( strlen(str) >=8 ){
    len=1;
  }
}
  
if( small==1 && big==1 && number==1 && len==1 ){
  printf("New password is %s",str);
  break;
}
  
}
  
	return 0;
}
/*
입력 받은 패스워드가 8문자 이상, 소문자 1개 이상, 대문자 1개 이상, 숫자 1개 이상일 
때까지 패스워드 입력을 요구하는 프로그램을 작성하라. 
조건이 맞는 패스워드가 나오면 New password is …을 출력한다. 
입출력 예시를 참고해서 똑 같은 내용을 출력하라.

//입출력 예시 1
Enter password: @7%k*j^&
Enter password: @7%k*J^&
New password is @7%k*J^&

//입출력 예시 2
Enter password: nothing
Enter password: something
Enter password: 1ADsifsomehoiug
New password is 1ADsifsomehoiug

//입출력 예시 3
Enter password: heLe57
Enter password: YOUnamSaying
Enter password: chosun
Enter password: Chosun_password
Enter password: 123456789
Enter password: Chosun@2023
New password is Chosun@2023
*/