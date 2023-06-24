#include<stdio.h>
#include<stdlib.h>
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
// 배열 크기 받고 크기만큼 인덱스 입력받은후, 버블정렬해서 출력
int main(){

int size , i ;
  scanf("%d",&size);

int *arr = (int*)malloc( sizeof(int)*size );

for( i=0; i<size; i++ ){
 scanf("%d",&arr[i]);
}

  sort(arr,size);

  for( i=0; i<size; i++ ){
    printf("%d ",arr[i]);
  }

  free(arr);
	return 0;
}
