#include<stdio.h>
#include<string.h>
int main(){

char str[30];
int lower=0,upper=0,number=0,length=0;

for(;;){
lower=0,upper=0,number=0; //조건 초기화
printf("Enter password: ");
scanf("%s",str);

for(int i=0; i <= strlen(str); i++ ){ // i범위 
	if( 'a' < str[i] && str[i] < 'z' )
	lower=1;
	if( 'A' < str[i] && str[i] < 'Z' )
	upper=1;
	if( '0' < str[i] && str[i] < '9' )
	number=1;
}

length = strlen(str);
//문자열 검사가 끝나고 조건만족한다면 출력,탈출
if( lower==1 && upper==1 && number==1 && length>=8){
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