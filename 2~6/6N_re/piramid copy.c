#include<stdio.h>

int main(){

int j,n,i;
scanf("%d",&n);

for(j=1; j<=n; j+=2)
{
	for(i=1; i<=(n-j)/2; i++)
	printf("-");
	for(i=1; i<=j; i++)
	printf("*");
	for(i=1; i<=(n-j)/2; i++)
	printf("-");

	printf("\n");
}

	return 0;
}

/*
//입력 출력 예시 1
5
--*--
-***-
*****
*/


