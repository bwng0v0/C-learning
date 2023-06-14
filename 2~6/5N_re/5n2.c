#include<stdio.h>

int main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
//a가 중간인 경우
if(b>a&&a>c || c>a&&a>b)
printf("%d",a);
//b가 중간인 경우
else if(a>b&&b>c || c>b&&b>a)
printf("%d",b);
//c가 중간인 경우
else if(a>c&&c>b || b>c&&c>a)
printf("%d",c);

	return 0;
}

/*
사용자로부터 입력받은 서로 다른 3개의 정수 중에서 크기가 중간인 수를 찾는
프로그램을 작성한다.

# 입력 예시 1
20 10 30

# 출력 예시 1
20
*/