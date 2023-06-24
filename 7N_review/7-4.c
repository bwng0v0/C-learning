#include<stdio.h>

int main(){

  int x;

  scanf("%d",&x);
  
int arr[10] , i ;

  for( i=1; i<10; i++ ){
    arr[i] = x*i;
  }

  for( i=1; i<10; i++ ){
  printf("%d X %d = %d\n",x,i,arr[i]);
  }
  
	return 0;
}
/*
## 문제 설명
사용자로부터 구구단 중 하나의 단을 키보드로부터 입력받아 그 단을 출력한다.


## 입력 예시 1
3

## 출력 예시 1
3 X 1 = 3
3 X 2 = 6
3 X 3 = 9
3 X 4 = 12
3 X 5 = 15
3 X 6 = 18
3 X 7 = 21
3 X 8 = 24
3 X 9 = 27
*/