#include<stdio.h>

int main(){

long long money,years,x;
scanf("%lld %lld",&money,&years);
x=money*(years*12);
printf("%lld",x);

	return 0;
}