#include<stdio.h>
//매우 유용할듯
int main(){
char str2[30];
char str[30];
int arr;

scanf("%d",&arr);
scanf("%s",str2);

sprintf( str , "The number is %d%s",arr,str2 );

printf("%s",str);

	return 0;
}