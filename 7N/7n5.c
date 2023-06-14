#include<stdio.h>

int main(){
int i,tmp,k;
int list[10];
for(i=0; i<10; i++)
scanf("%d",&list[i]);

for(i=0; i<9; i++){ //사이클
	for(k=0; k<9; k++){ // 버블 올리기
		if(list[k] > list[k+1]){
			tmp=list[k]; list[k]=list[k+1]; list[k+1]=tmp; 
		}
	}
}


for(i=0; i<10; i++)
printf("%d ",list[i]);
	return 0;
}
/*
## 문제 설명 [5]
길이가 10인 배열을 버블 정렬을 통하여 오름차순 형태로 정렬한다.
키보드로부터 배열의 값들을 입력받고, 정렬된 배열의 값들을 출력한다.
*/