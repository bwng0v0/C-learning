#include<stdio.h>

void sort(int *arr, int size){

  int tmp;
  for( int i=0; i<size-1; i++ ){
    for( int j=0; j<size-1; j++ ){
      if( arr[j] > arr[j+1] ){
        tmp = arr[j]; arr[j] = arr[j+1]; arr[j+1] = tmp;
      }
    }
  }
 
}
int main(){

int arr[6] ,i ;

for( i=0; i<6; i++ ){
scanf("%d",&arr[i]);
}

sort(arr,6);

  for( i=0; i<6; i++ ){
    printf("%d ",arr[i]);
  }
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