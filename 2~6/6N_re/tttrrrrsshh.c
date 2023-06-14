#include<stdio.h>

int main(){

int n,num,count,i,its_prime;
scanf("%d",&n);
count=0;
its_prime=0;
for(;;)
{
    if(n==count)
    break;
    for(num=2; num>0; num++)
    {
        for(i=2; i<num; i++)
        { 
        if(num%i==0)
        {
            its_prime=0;
            break;
        }
        else 
        {
            printf("%d ",num);  count++; its_prime=1; break;
        }
        }
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