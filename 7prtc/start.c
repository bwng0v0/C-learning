#include<stdio.h>

int add(int x,int y )
{
	int result;
	result= x+y;
	return result;
}

int main(){

int a,b;

scanf("%d %d",&a,&b);

for(int i=0; i<10; i++)
printf("%d",add(a,b));



	return 0;
}