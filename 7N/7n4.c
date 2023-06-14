#include<stdio.h>

int main(){
int n,i,x,k;
scanf("%d",&n);

int list[n][9];

for(i=0; i<9; i++){
	for(k=0; k<n; k++){
		list[k][i]=(k+1)+(i*n);
	}
}

k=n-1; //배열의 범위, 테이블 형태로 떠올리면 쉽다, ex) k(행)= 0~2  i(열)= 1~9
//수정: 고정값 k=2라고 하면 행 수는 n에 비례하는데, 출력하고싶은 행의 끝 값이 2로 고정되면 안됨.
for(i=0; i<9; i++){
	printf("%d X %d = %d\n",n,i+1,list[k][i]);
}


	return 0;
}
/*
## 문제 설명 [4]
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