#include<stdio.h>

int main(){

int n,i,k,nl,x,star,j;
scanf("%d",&n);
x=n+1;
nl=x/2;
j=0;
for(star=1; j<nl; j++)
{
    for(k=1; k<=(n-star)/2; k++)
    printf("-");
    for(i=1; i<=star; i++)
    printf("*");
    for(k=1; k<=(n-star)/2; k++)
    printf("-");
    printf("\n");
    star=star+2;
    
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
*/