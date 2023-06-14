#include <stdio.h>
//함수 부족한듯
int plus(int *a); //매개변수와 다른 변수의 이름이 같아도되나?

int main() {
    
int a = 0;
int* p = &a;

plus(p);
plus(p);
plus(p);

printf("%d",a);

    return 0;
}

int plus(int *a){
    (*a)++;
}