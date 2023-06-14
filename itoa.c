#include <stdio.h>
#include <stdlib.h>
//전체적으로 atoi와 비슷함
int main() {
    
int array[3];
char str[30];

for( int i=0; i<3; i++ )
scanf("%d",&array[i]);

for( int i=0; i<3; i++ )
itoa( array[i] , str , 10 );

printf("%s",str);


    return 0;
}
