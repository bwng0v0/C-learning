#include<stdio.h>

int main(){
unsigned n,i,k;
scanf("%d",&n);
// 범위를 다 i<=n으로 했더니 1개 씩 더나옴 
for(i=0; i<n; i++)
printf("A");
printf("\n");

for(k=0; k<n-2; k++)
{
    printf("A");
    for(i=0; i<n-2; i++)
    printf("B");
    printf("A\n");
}
for(i=0; i<n; i++)
printf("A");
printf("\n");

	return 0;
}
/*
//입력 출력 예시 1
5
AAAAA
ABBBA
ABBBA
ABBBA
AAAAA
*/