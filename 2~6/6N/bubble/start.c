#include<stdio.h>
#define size 10
int main(){

int list[size]={1,2,9,3,4,5,6,7,8};
int cycle,tmp,i,sorted;
sorted=1;
for(cycle=0; cycle<size-1; cycle++)
{
	if(sorted==0)
	break;
	for(i=0; i<size; i++)
	printf("%d ",list[i]);
	printf("\n");
	sorted=0;
	for(i=0; i<size-cycle-1; i++)
	{
		if(list[i]>list[i+1])
		{
		tmp=list[i];
		list[i]=list[i+1];
		list[i+1]=tmp;
		sorted=1;
		}
	}
}


	return 0;
}