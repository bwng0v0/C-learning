#include<stdio.h>

int main(){

double rad,angle,area;

scanf("%lf %lf", &rad ,&angle);
area=rad*rad*3.14*(angle/360);

printf("%.20lf",area);
	return 0;
}