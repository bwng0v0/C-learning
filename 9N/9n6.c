#include<stdio.h>
void sort_array(int *v, int n, int m);
int main(){

int n,i,j,up_or_down;

for(;;){ //배열크기, 오름,내림차순 여부 받기
	scanf("%d %d",&n ,&up_or_down);
	if(n<=10)
	break;
}

int list[n]; //배열 선언
for(i=0; i<n; i++) //배열에 데이터 받기
scanf("%d",&list[i]);

sort_array(list,n,up_or_down);

for(i=0; i<n; i++)
printf("%d ",list[i]);

	return 0;
}

void sort_array(int *v, int n, int m){
	int i,j,tmp;
if(m==0){
	for(i=0; i<n; i++){
		for(j=0; j<n-1; j++){
			if(v[j] > v[j+1]){ //수정: 중괄호로 if문 감싸니 돌아감
			tmp=v[j]; v[j]=v[j+1]; v[j+1]=tmp;
			}
		}
	}
	} else if(m==1){
	for(i=0; i<n; i++){
		for(j=0; j<n-1; j++){
			if(v[j]<v[j+1]){
			tmp=v[j]; v[j]=v[j+1]; v[j+1]=tmp;
			}
		}
	}
	}
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