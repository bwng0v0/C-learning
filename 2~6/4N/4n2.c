#include<stdio.h>
#include<math.h>
int main(){
//왜 하다가 말음? ㅋㅋㅋㅋ
int original,per,period,result;
printf("투자원금 : ");
scanf("%d" , &original);

printf("이율(%) : ");
scanf("%d" , &per);

printf("투자기간 : ");
scanf("%d" , &period);

original*(1+per);

printf("10년 후의 원리금 = %d\n", result);

	return 0;
}