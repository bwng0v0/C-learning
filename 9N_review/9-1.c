#include<stdio.h>
void swap(int *px, int *py){
int tmp;
tmp = *px; *px = *py; *py = tmp;
}
//-----------------------------------------------------
int main(){

int count=0, i,j, arr[10];

for( ;; ){
scanf("%d",&arr[count]);
if( 1<=arr[count] && arr[count]<=50 ){
  count++;
}

if( count >= 10 )
break;
}
  
for( i=0; i<10-1; i++ ){
  for( j=0; j<10-1; j++ ){
    if( arr[j] > arr[j+1] ){
      swap(&arr[j],&arr[j+1]);
    }
  }
}

  for( i=0; i<10; i++ ){
    printf("%d ",arr[i]);
  }
  
	return 0;
}
/*
1부터 50사이의 정수를 순서대로 10개 입력 받는다(1부터 50사이의 수가 아니면 반복한다). 
void swap(int *px, int *py) 함수를 작성하고
이를 이용하여 입력받은 10개의 수를 증가하는 순으로 출력하는 프로그램을 작성하라. 

## 입력 예시
15 28 14 19 36 23 9 3 1 47

## 출력 예시
1 3 9 14 15 19 23 28 36 47

## 입력 예시
1 2 3 4 5 6 7 8 9 1

## 출력 예시
1 1 2 3 4 5 6 7 8 9
*/