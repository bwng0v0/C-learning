#include<stdio.h>

void sort_array(int *v, int n, int m){
  int i,j,tmp;
if( m==0 ){
  for( i=0; i<n-1; i++ ){
    for( j=0; j<n-1; j++ ){
      if( v[j] > v[j+1] ){
        tmp=v[j]; v[j]=v[j+1]; v[j+1]=tmp;
      }
    }
  }
} else if ( m==1 ){
  for( i=0; i<n-1; i++ ){
    for( j=0; j<n-1; j++ ){
      if( v[j] < v[j+1] ){
        tmp=v[j]; v[j]=v[j+1]; v[j+1]=tmp;
      }
    }
  }
}
  
}
int main(){
int n, up_or_down;
scanf("%d",&n);
scanf("%d",&up_or_down);
int v[n] , i ;
for( i=0; i<n; i++ ){
  scanf("%d",&v[i]);
}

sort_array(v,n,up_or_down);
  
for( i=0; i<n; i++ ){
  printf("%d ",v[i]);
}
  
	return 0;
}
/*
## 문제 설명
크기가 n(<=10)인 정수형 배열 v의 원소들을 오름차순 혹은 내림차순으로 정렬하는 함수
void sort_array(int *v, int n, int m)을 작성하라. 
함수에서 v는 배열의 이름, n은 배열의 크기이며, m은 0또는 1의 값을 갖는다.
0은 오름차순을 의미하며, 1은 내림 차순을 의미한다.
입력의 첫 번째 줄은 n(배열의 크기)과 m(오름 차순 또는 내림 차순)이며 두 번째 줄은 배열의
n개의 데이터가 입력된다.

## 입력 예시 
5 0
12 25 45 65 23

## 출력 예시 
12 23 25 45 65

## 입력 예시 
5 1
12 25 45 65 23

## 출력 예시 
65 45 25 23 12

## 입력 예시 
3 1
-58 -65 -63

## 출력 예시 
-58 –63 -65
*/