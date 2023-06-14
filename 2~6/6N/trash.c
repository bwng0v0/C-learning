#include<stdio.h>

int main(){

int n,num,count,i,is_prime;

scanf("%d",&n);
num=2;
count=0;
is_prime=0;
//무한반복 숫자를 올리면서
for(;;)
{
    num++;
    //소수인지 판별해서 소수라면 카운트올리고 프린트
    for(i=2; i<num; i++)
        {
            if(num%i==0)
            is_prime=0;

            else{
                is_prime=1;
                count++;
                printf("%d",num);
            }
        }   
        if(n==count)
        break; 
}







	return 0;
} 