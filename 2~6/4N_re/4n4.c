#include<stdio.h>

int main(){

int x,tmp;
printf("정수를 입력하시오: ");
scanf("%d",&x);

tmp=x/100;
printf("백의 자리수: %d\n",tmp);
x=x-(tmp*100);
tmp=x/10;
printf("십의 자리수: %d\n",tmp);
x=x-(tmp*10);
printf("일의 자리수: %d\n",x);
	return 0;
}

/*
세 자리로 이루어진 숫자를 입력받은 후에 각각의 자리수를 분리하고 이 자리수를 출력하는 프로그램을 작성하라.
# 입력 예시
정수를 입력하시오: 835

# 출력 예시
백의 자리수: 8
십의 자리수: 3
일의 자리수: 5
*/