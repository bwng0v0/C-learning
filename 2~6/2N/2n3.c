#include<stdio.h>

int main(){

int a,b,x;
printf("첫 번째 숫자를 입력하시오:");
scanf("%d",&a);
printf("두 번째 숫자를 입력하시오:");
scanf("%d",&b);

x=a+b;
printf("두수의 합= %d\n",x);
x=a-b;
printf("두수의 차= %d\n",x);
x=a*b;
printf("두수의 곱= %d\n",x);
x=a/b;
printf("두수의 몫= %d",x);
	return 0;
}