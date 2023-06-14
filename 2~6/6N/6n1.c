#include<stdio.h>

int main(){

unsigned x,y,n;
x=0;
scanf("%d",&n); //첫째줄
for(x=0; x<n; x++){
printf("A"); 
}

printf("\n"); //2~n-1째 줄
for(y=0; y<n-2; y++){
printf("A");
for(x=0; x<n-2; x++)
printf("B");
printf("A");
printf("\n");
}

 // 마지막 줄
for(x=0; x<n; x++){
printf("A"); 
}
	return 0;
}