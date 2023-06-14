#include<stdio.h>

int main(){

int i,j,n;
scanf("%d",&n);

for(i=1; i<=n; i+=2)
{
	for(j=1; j<=(n-i)/2; j++)
	printf("-");
	for(j=1; j<=i; j++)
	printf("*");
	for(j=1; j<=(n-i)/2; j++)
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


