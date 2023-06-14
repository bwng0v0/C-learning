#include<stdio.h>
#define size 10
int main(){
//수정 앞과 뒤를 비교할때 x와 x+1을 비교하는데 size 10의 범위는 정수 0~9이다
// 하지만 예전코드인 x가 10까지 증감되었을때 비교대상은 size[10]의 범위를 벗어난 size[11]이었다.
//그래서 이상한 정수값이 같이 프린트 되던것.
// 그래서 사이클도 불필요한 움직임을 줄이기 위해 size-1인 9로 해주었고
// 한번 사이클이 회전할때도 [x(10)]과 정의되지않은값인 [x(11)]이 비교되지않도록 for문의 x<size를 x<size-1로 수정.
// 결과값 프린트도 x값이 0부터 시작해 9로 끝나도록 수정하며 인덱스 바깥범위는 사용하지 않도록 모두 수정했다.
// vsc는 죄가 없었다 ㅋㅋㅋㅋ


int list[size]={9,8,7,6,5,4,3,2,1,0};
int cycle,temp,x;
//사이클을 배열수만큼 반복
for(cycle=0; cycle<size-1; cycle++){
//한사이클 for x=0 시작 x가 10보다 작다면 실행후 x+=1만큼 증감
	for(x=0; x<size-1; x++){
		if (list[x]>list[x+1])
		{
			//if [x]가 [x+1]보다 크다면 서로 교환 (앞에 있는게 뒤에있는거보다 크다면) 
			temp=list[x];
			list[x]=list[x+1];
			list[x+1]=temp;
		}
	}
}
// 정렬 결과 프린트 
for(x=0; x<=size-1; x++)
printf("%d ",list[x]);



	return 0;
}