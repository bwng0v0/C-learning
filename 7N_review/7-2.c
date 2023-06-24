#include<stdio.h>
#define size 5
int main(){

  int arr[size] , i , max , cnt=0;
  for( i=0; i<size; i++ ){
  scanf("%d",&arr[i]);
  }

  max = arr[0];

  for( i=0; i<size; i++ ){
    if( arr[i] > max ){
      max= arr[i];
    }
  }

  for( i=0; i<size; i++ ){
    if( arr[i] == max ){
      cnt++;
    }
  }

  printf("%d %d",max,cnt);
	return 0;
}
/*
## 문제 설명 
교재의 프로그램에서 최솟값 대신에 최댓값을 찾고 그 최댓값의 개수도 함께 찾아서
출력하는 프로그램을 작성해보자.
단, 물건의 개수는 5개로 고정하고 물건의 가격은 키보드로부터 입력한다.


# 입력 예시 1
20 30 70 40 70

# 출력 예시 1
70 2


# 입력 예시 2
7 8 13 10 1

# 출력 예시 2
13 1


# 입력 예시 3
30 30 10 20 30

# 출력 예시 3
30 3
*/