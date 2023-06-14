#include<stdio.h>
#define size 10
int main(){

int list[size]={10,11,2,3,4,5,6,7,8,9};
int cycle,temp,x,y;
y=1;
//사이클을 배열수만큼 반복
for(cycle=0; cycle<size-1; cycle++)
{
	// y가 0이라면 브레이크 (전 사이클에서 교환이 없었다면 프린트하고 브레이크)
	if(y==0)
	break;
	// y가 1이라면 y=0; , 교환 시작
	else{ y=0;
	for(x=0; x<=size-1; x++)
	printf("%d ",list[x]);
	printf("\n");

//한사이클 for x=0 시작 x가 10보다 작다면 실행후 x+=1만큼 증감
	for(x=0; x<size-1; x++){
            if (list[x]>list[x+1])
		{
			//if [x]가 [x+1]보다 크다면 서로 교환 (앞에 있는게 뒤에있는거보다 크다면) 
			temp=list[x];
			list[x]=list[x+1];
			list[x+1]=temp;
            y=1;

		}
	}
}
}
// 정렬 결과 프린트 
/*

for(x=0; x<=size-1; x++)
printf("%d ",list[x]);
printf("\n%d", y);

*/

	return 0;
}