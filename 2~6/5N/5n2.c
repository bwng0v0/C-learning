#include<stdio.h>
//사용자로부터 입력받은 서로 다른 3개의 정수 중에서 크기가 중간인 수를 찾는 프로그램을 작성한다.
int main(){

int a,b,c,middle;
scanf("%d %d %d", &a, &b, &c);
middle=0;
/* 첫번째 코드 (패스는 함 ㅋㅋ)
if(a>b)
{
if(b>c)
middle=b;
else if(a<c) // a>b, b<c
middle=a;
else middle=c;
}
else if(a>c)  //a<b
middle=a;
else if(b>c) // a<b, a<c
middle=b;
else middle=c;
*/
if((a>b && b>c)||(c>b && b>a))
middle=b;
else if((b>a && a>c)||(c>a && a>b))
middle=a;
else if ((a>c&&c>b)||(b>c&&c>a))
middle=c;
printf("%d", middle);
	return 0;
}