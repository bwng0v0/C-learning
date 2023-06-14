#include<stdio.h>

int main(){

int n,num,prime_count,i,its_prime;
scanf("%d",&n);
prime_count=0;

    for(num=2;;num++)
    {
        if(n==prime_count)
        break;
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

/*
Unsigned 정수를 입력 받아 받은 수의 소수를 2부터 출력하라.
예시: 5를 입력 받으면 5개의 소수를 출력, 2 3 5 7 11.

//입력 출력 예시 1
5
2 3 5 7 11
*/