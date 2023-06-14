#include<stdio.h>

int main(){
int count,x,y,n;
scanf("%d",&n);

//카운트=한줄에 들어가는 마이너스/2
count=(n-1)/2;

for(count=count; count>=0; count--)
{
//한줄 프린트하는 코드
//수정: x<=count를 x<count로 변경, 마이너스하고 별이 각각 1개씩 더나오던 현상 수정.
for(x=0; x<count; x++)
printf("-");
//별은 마이너스 개수에 반비례해서 프린트
for(y=0; y<n-(2*count); y++)
printf("*");
for(x=0; x<count; x++)
printf("-");
//한줄 끝나고 줄바꿈
printf("\n");
}
	return 0;
}

/*
홀수를 입력 받아, 홀수 크기의 피라미드를 그려보자. 
피라미드는 마이너스와 곱하기 문자를 사용한다.

//입력 출력 예시 1
5
--*--
-***-
*****

//입력 출력 예시 2
7
---*---
--***--
-*****-
*******
*/