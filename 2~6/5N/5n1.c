#include<stdio.h>

int main(){

   /* 양의 정수를 입력받아서 3의 배수인 동시에 4의 배수이면 “YES”를 출력하고,
그렇지 않으면 “NO”를 출력한다.
만약 입력한 정수가 양수가 아니면 “Wrong input”이라고 출력한다.*/

int A;
scanf("%d",&A);
if(A<=0)
printf("Wrong input");
else if((A%3==0) && (A%4==0))
printf("YES");
else printf("NO");





	return 0;
}