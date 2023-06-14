#include<stdio.h>

int main(){

double x,y;
y=0;
scanf("%lf",&x);
y=(3*(x*x*x))-(7*(x*x))+9;
printf("%.2lf",y);
//x값 범위 지정 안했는데 걍 통과가 되네?
//원래는 if로 지정하려했는데 gpt가 if로 지정하는거 맞다네

//y=3.0x^3-7.0x^2+9

	return 0;
}