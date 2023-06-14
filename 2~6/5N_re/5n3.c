#include<stdio.h>

int main(){
// 5장2번
/*연도와 달이 입력되면 그 달의 일수를 출력한다. 단, 윤년도 고려해야 한다.*/

int year,month;
scanf("%d %d",&year,&month);
switch (month)
{
case 2:
if(year%4==0 && year%100!=0 || year%400==0)
	printf("29");
	else printf("28");
	break;
case 4:
case 6:
case 9:
case 11:
printf("30");
break;
default:
printf("31");
	break;
}




	return 0;
}