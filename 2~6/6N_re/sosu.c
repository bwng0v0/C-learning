#include<stdio.h>

int main(){

int its_prime, n, prime_count, i, num;
prime_count=0; //값이 입력되거나 저장되지않는 변수는 초기화해야 사용가능한 상태가 됨

scanf("%d",&n);
for(num=2;; num++)//정수2부터 증감
{
    if(n==prime_count)
    {
        break;
    }

    its_prime=1;
    for(i=2; i<num; i++)
    {
    if(num%i==0)
    its_prime=0;
    }

    if(its_prime==1)
    {
        printf("%d ",num);
        prime_count++;
    }
}


	return 0;
}

