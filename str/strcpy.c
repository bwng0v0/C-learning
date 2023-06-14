#include<stdio.h>
#include<string.h>
int main(){

char str1[30];
char str2[30];

scanf("%s",&str1);

strcpy( str2 , str1 );

printf("%s",str2);

	return 0;
}