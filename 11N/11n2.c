#include<stdio.h>
#include<string.h>
//수정1 : 스위치 문 안에서 변수를 선언할때는 {}를 사용해야함 (스코프 규칙)
struct employee {
	char name[10];
	int number;
	char phone[20];
	int age;
};
//이거 일치 검색이 아니라 비슷한 내용 검색으로 시험 나올거같은데
int main(){
//구조체 배열 선언
struct employee list[10]={
{"Jeon", 123,"2345-7890", 32},
{"Kim", 125,"3458-9990", 22},
{"Lee", 133, "7345-9870", 45},
{"Bae", 140, "5321-1234", 54},
{"Kang", 205, "4916-5052", 48},
{"Lee", 245, "2039-3458", 25},
{"Kim", 777, "4708-2323", 34},
{"Smith", 900, "6408-3298", 39},
{"Park", 428, "3482-9283", 21},
{"Kim", 973, "8934-2738", 25}
};

int option = 0 ,i;
scanf("%d",&option); //옵션을 먼저 받고


switch (option) //옵션에 따라 받을 자료형을 결정하고 그 자료형에 맞춰 검색
{
case 1: { // 옵션1 : 이름으로 검색
char name[10];
scanf("%s",name); //이름 받기
for(  i=0; i<10; i++  ){
if (  strcmp(name,list[i].name) == 0  ){
	printf("%s %d %s %d\n", list[i].name, list[i].number, list[i].phone, list[i].age );
}
}
break; }


case 2: { // 옵션2 : 사번으로 검색
int number;
scanf("%d",&number); //사번 받기
for(  i=0; i<10; i++  ){
if ( number == list[i].number ){
	printf("%s %d %s %d\n", list[i].name, list[i].number, list[i].phone, list[i].age );
}
}
break; }


case 3: { // 옵션3 : 전화번호로 검색
char phone[20];
scanf("%s",phone); //전화번호 받기
for(  i=0; i<10; i++  ){
if (  strcmp(phone,list[i].phone) == 0  ){
	printf("%s %d %s %d\n", list[i].name, list[i].number, list[i].phone, list[i].age );
}
}
break; }


case 4: { // 옵션4 : 나이로 검색
int from_age,to_age;
scanf("%d",&from_age);
scanf("%d",&to_age); // n이상, n이하 나이 둘다 받기
for( i=0; i<10; i++ ){
if( from_age<= list[i].age && list[i].age <= to_age ){
	printf("%s %d %s %d\n", list[i].name, list[i].number, list[i].phone, list[i].age );
}
}
break; }

default:
	break;
}

	return 0;
}
/*
## 문제 설명
직원을 나타내는 구조체 employee가 
이름(영문 문자열), 사번(정수), 전화번호(숫자 문자열), 나이(정수) 등으로 구성된다.

다음의 직원 10명의 정보를 구조체 배열로 저장하고, 
주어진 검색 조건에 따라 검색의 결과를 출력하는 프로그램을 작성하자.

Jeon 123 2345-7890 32
Kim 125 3458-9990 22
Lee 133 7345-9870 45
Bae 140 5321-1234 54
Kang 205 4916-5052 48
Lee 245 2039-3458 25
Kim 777 4708-2323 34
Smith 900 6408-3298 39
Park 428 3482-9283 21
Kim 973 8934-2738 25

## 입력
입력은 아래의 포맷으로 구성된다. 
{검색의 종류} {각 검색 종류에 따른 검색 조건}

{검색 종류}는 아래의 숫자 중 하나이며, 
각 번호는 이름, 사번, 전화번호, 나이의 범위를 의미한다.  
1 --> 이름, 2 --> 사번, 3 --> 전화번호, 4 --> 나이의 범위

{각 검색 종류에 따른 검색 조건}의 형식은 아래와 같다.
1 Kim --> Kim이란 이름을 가진 사람을 모두 찾아, 그 사람들의 정보를 출력
2 133 --> 사번 133을 가진 사람을 찾아, 그 사람의 정보를 출력
3 5321-1234 전화번호 5341-1234를 가진 사람을 찾아 그 사람의 정보를 출력
4 20 30 --> 나이 20살 이상 30살 이하의 사람들을 찾아 그 사람들의 정보를 출력

## 출력
검색 조건에 맞는 사람 또는 사람들의 정보를 출력, 
해당 조건에 맞는 사람이 없을 때는 -1을 출력한다. 

## 입력 예제 1
1 Kim

## 출력 예제 1
Kim 125 3458-9990 22
Kim 777 4708-2323 34
Kim 973 8934-2738 25

## 입력 예제 2
4 20 30

## 출력 예제 2
Kim 125 3458-9990 22
Lee 245 2039-3458 25
Park 428 3482-9283 21
Kim 973 8934-2738 25
*/