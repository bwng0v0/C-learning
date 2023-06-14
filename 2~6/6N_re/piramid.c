#include<stdio.h>

int main(){

int n,k,i,line,minus;
scanf("%d",&n);
line=(n+1)/2;
minus=line-1;
for(i=0; i<line; i++)
{
	for(k=0; k<minus; k++)
	printf("-");
	for(k=0; k<(n-(2*minus)); k++)
	printf("*");
	for(k=0; k<minus; k++)
	printf("-");
	
	printf("\n");
	minus=minus-1;
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


