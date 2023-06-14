#include<stdio.h>
void swap(int *px,int *py);

int main(){

int list[10],	i,	count =0,	tmp,	j;
//수정 정수를 받을때 권총 탄창처럼 받는게 아니라 자판기 동전처럼 받아보자자
for( ; ; ){

	scanf("%d",& tmp); //정수를 받고 조건을 만족한다면 배열에 저장하고 카운트 증감
	if( 1<=tmp && tmp<=50 ){
		list[count]= tmp;
		count++;
	}

	if(count>=10)
	break;
	
}

//버블정렬 시작
for(i=0; i<10; i++){
	for(j=0; j<10-1; j++){
		if(list[j] > list[j+1])
		swap(&list[j], &list[j+1]);
	}
}

for(i=0; i<10; i++) //결과 프린트
printf("%d ",list[i]);


	return 0;
}

void swap(int *px,int *py){
int tmp;
tmp=*px; *px=*py; *py=tmp;
}

/*
1부터 50사이의 정수를 순서대로 10개 입력 받는다(1부터 50사이의 수가 아니면 반복한다). 
void swap(int *px, *py) 함수를 작성하고 이를 이용하여 입력받은 10개의 수를 증가하는 순으로 출력하는 프로그램을 작성하라. 

## 입력 예시
15 28 14 19 36 23 9 3 1 47

## 출력 예시
1 3 9 14 15 19 23 28 36 47

## 입력 예시
1 2 3 4 5 6 7 8 9 1

## 출력 예시
1 1 2 3 4 5 6 7 8 9

*/