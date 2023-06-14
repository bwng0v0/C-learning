#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	long long int saving, years, property;

	scanf("%lld %lld", &saving, &years);
	property=saving*property*12;

	printf("%lld \n", property);
    
	return 0;
}