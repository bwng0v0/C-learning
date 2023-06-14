#include<stdio.h>

int main(){

int price[5];
int largest, count=0, i, tmp; // 배열, 변수 초기화 필수
for(i=0; i<5; i++)
scanf("%d",&price[i]);

for(i=0; i<5-1; i++){ // 버블 한방울 올려서 최댓값 맨 뒤로보내기
	if(price[i]>price[i+1]){
		tmp=price[i]; price[i]=price[i+1]; price[i+1]=tmp;
	}
}
largest= price[4]; //최대값 저장


for(i=0; i<5; i++){ //모든 배열칸에서 실행
	if(price[i]==largest){ //해당 배열이 최대값과 같다면 카운트+1 (카운트=최대값 개수)
		count++;
	}
}

printf("%d %d",largest,count);

	return 0;
}
/*
## 문제 설명 [2]
교재의 프로그램에서 최솟값 대신에 최댓값을 찾고 그 최댓값의 개수도 함께 찾아서 출력하는 프로그램을 작성해보자.
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