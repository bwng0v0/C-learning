#include<stdio.h>

int main(){

int pay,price,change,w500,w100,w10;

printf("투입한 돈: ");
scanf("%d",&pay);
printf("물건 값: ");
scanf("%d",&price);

change=pay-price;
printf("거스름돈: %d\n\n",change);
w500=change/500;
change=change-(w500*500);
printf("500원 동전의 개수: %d\n",w500);
w100=change/100;
change=change-(w100*100);
printf("100원 동전의 개수: %d\n",w100);
w10=change/10;
change=change-(w10*10);
printf("10원 동전의 개수: %d\n",w10);
	return 0;
}

/*
# 입력 예시
투입한 돈: 1000
물건 값: 240

# 출력 예시
거스름돈: 760

500원 동전의 개수: 1
100원 동전의 개수: 2
10원 동전의 개수: 6
*/