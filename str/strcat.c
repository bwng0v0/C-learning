#include<stdio.h>
#include<string.h>
int main(){

char str1[30] = "";
char str2[30] = " 1" ;

//scanf("%s",&str1);
//scanf("%s",&str2);

strcat( str1 , str2 );

printf("%s",str1);

	return 0;
}