#include <stdio.h>

int main() {
    char input[20];
	char input2[20];

    double a1, b1 ,a2,b2 ,r1,r2;

	scanf("%s",input);
	scanf("%s",input2);

    sscanf(input, "%lf+%lfi", &a1, &b1);
	sscanf(input2, "%lf+%lfi", &a2, &b2);

r1 = a1 + a2;
r2= b1 + b2;

printf("%.1lf+%.1lfi",r1,r2);

    return 0;
}
