#include<stdio.h>

int main(){

double principal,interest_rate,period,output,i;
printf("투자원금 : ");
scanf("%lf",&principal);
printf("이율(%) : ");
scanf("%lf",&interest_rate);
printf("투자기간 : ");
scanf("%lf",&period);
output=principal;

//0부터 9까지 1부터가 아니라 0부터 시작하니까 <=이 아니라 <였어 와
for(i=0; i<period; i++)
{
    output=output*(1+0.01*interest_rate); //오 지린다
}
printf("%.0lf년 후의 원리금 = %lf",period,output);

	return 0;
}
/*
# 입력 예시
투자원금 : 24
이율(%) : 6
투자기간 : 10

# 출력 예시
10년 후의 원리금 = 42.980345
*/