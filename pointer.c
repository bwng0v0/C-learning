#include<stdio.h>

int main(){

int A[5];

int *p , *p2;

p = &A[0];
p2 = p;

for( int i=0; i<5; i++ ){
	*(p2+i) = i+1;
}

for( int i=0; i<5; i++ ){
	printf("%d ",p2[i]);
}


	return 0;
}