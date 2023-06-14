#include<stdio.h>

int main(){
int students,sum=0,average=0,i;
scanf("%d",&students);
int list[students];

for(i=0; i<students; i++) //   for(int i=0; i<n; i++)처럼 for문 안에서 선언된 변수 i는 해당for문 안에서만 사용가능함.
                         //    자세한건 변수의 스코프(scope) 개념 참조
{
scanf("%d",&list[i]);
}

for(i=0; i<students; i++)
{
sum=list[i]+sum;
}
average= sum/students;
printf("%d",average);
	return 0;
}
/*
## 문제 설명 [1]
학생들의 숫자와 성적을 입력받고, 성적의 평균을 계산하는 프로그램을 작성해보자. 
학생의 숫자를 가장 먼저 입력받으며, 학생의 숫자는 1보다는 크고 100보다 작은 숫자이다.
학생의 숫자 다음에 나오는 숫자들이 학생들의 성적이다. 
성적은 모두 정수형으로 처리하며 평균도 정수형으로 출력한다.


## 입력 예시 1
5 8 9 10 11 12

## 출력 예시 1
10


## 입력 예시 2
10 10 20 30 40 50 60 70 80 90 100

## 출력 예시 2
55


## 입력 예시 3
3 50 70 90

## 출력 예시 3
70
*/