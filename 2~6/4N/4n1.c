#include<stdio.h>

int main(){

int money,price,change;

        printf("투입한 돈: ");
        scanf("%d", &money);

        printf("물건값: ");
        scanf("%d", &price);
change=money-price;
printf("거스름돈: %d\n\n",change);
int coin500s = change / 500;
change = change % 500;
int coin100s = change / 100;    // 거스름돈에서 100원 짜리의 개수 계산
        change = change % 100;        // 거스름돈에서 100원 짜리를 내주고 남은 돈

        int coin10s = change / 10;        // 거스름돈에서 10원 짜리의 개수 계산
        change = change % 10;        // 거스름돈에서 10원 짜리를 내주고 남은 돈

        printf("500원 동전의 개수: %d\n" , coin500s);
        printf("100원 동전의 개수: %d\n", coin100s);
        printf("10원 동전의 개수: %d\n", coin10s);

        
	return 0;
}