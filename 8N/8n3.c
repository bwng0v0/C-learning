#include<stdio.h>
#define size 6
int main(){
int tmp,k,i,list[size];
//scanf("%d %d %d %d %d %d",&a[0] ,&a[1] &a[2] &a[3] &a[4] & ) 이렇게 할필요가없네!! 근데 왜되는거지 gpt한테 물어보자
for(i=0; i<size; i++)
scanf("%d",&list[i]);


//오름차순 정렬
for(i=0; i<size-1; i++)//배열 인덱스만큼 버블 올리기
{
	for(k=0; k<size-1; k++)//버블이 올라가도록 반복하는 for문 ##(-k는 뒤에 밀린수는 이미 정렬된 수라서) -k했는데 고장남
	{        //size에 -1을 하는 이유는 list[k+1]을 실행할때 정의되지않은 범위를 건드리기때문 건드리면 문제가발생함
		if( list[k]>list[k+1] )
		{
			tmp=list[k]; list[k]=list[k+1]; list[k+1]=tmp; //만약 앞의것이 뒤의것보다 크다면 교환
		}
	}
}


for(i=0; i<size; i++)
printf("%d ",list[i]);

	return 0;
}
/*
6개의 숫자를 입력받아 오름차순이 되도록 정렬하시오.

입력예시 1
5 4 3 2 1 0
출력예시 1
0 1 2 3 4 5

입력예시 2
7 9 1 4 7 3
출력예시 2
1 3 4 7 7 9
*/