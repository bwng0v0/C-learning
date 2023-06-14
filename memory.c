#include<stdio.h>
#include<stdlib.h>
//13장 연습
int main(){

int size , i;
int *p; 

scanf("%d",&size);

p = (int*)malloc(   sizeof(int) * size   );
	if (p == NULL){
	printf("메모리 할당 오류\n");
	exit(1);
	}

for( i=0; i<size; i++ ){
	scanf("%d",&p[i]); //왜 주소연산자를 쓰지 p[i]는 p가 가리키는곳, &p는 p가 가리킬곳 아닌가
} // 왜 포인터 변수에 값을 저장하는거지
// 포인터 변수는 변수를 가리키는 '주소'를 저장하는 변수 아닌가

for( i=0; i<size; i++ ){
	printf("%d ",p[i]);
}

free(p);

for( i=0; i<size; i++ ){
	printf("%d ",p[i]);
}

	return 0;
}