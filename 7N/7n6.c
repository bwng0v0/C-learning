#include<stdio.h>

int main(){

int N,sum,row,column;
scanf("%d",&N);
int list[N][N];// 2차원 배열(행,열)

for(column=0; column<N; column++) //배열 초기화
{
	for(row=0; row<N; row++)
	list[row][column]=(row+1)+(N*(column));
}

sum=0;
column=0;
for(row=0; row<N; row++){ //행,열 모두 1씩 증감하면서 합계에 더하기
	sum= sum + list[row][column];
	column++;
}



/*
for(column=0; column<N; column++) //배열 출력
{
	for(row=0; row<N; row++)
	{
	printf("%d ",list[row][column]);
	}
	printf("\n");
}
*/

printf("%d",sum);

	return 0;
}

/*
## 문제 설명 [6]
1보다 크거나 같은 홀수 N을 입력받아, N x N의 크기를 가지는 2차원 배열을 선언하고, 
대각선에 있는 배열값들만 합하여 출력하는 프로그램을 작성해보자. 
배열들의 값들은 1부터 순서대로 초기화한다. (N의 크기는 100보다는 작다.)

예를 들어 3을 입력한다면,

1 2 3
4 5 6
7 8 9

와 같이 배열에 저장한 후 대각선의 값인 1+5+9 = 15를 출력하는 프로그램을 작성한다.


## 입력 예시 1
3

## 출력 예시 1
15


## 입력 예시 2
5

## 출력 예시 2
65
*/