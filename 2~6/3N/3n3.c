#include <stdio.h>

int main(void) {
  	double radius, angle, area;
  scanf("%lf %lf", &radius,&angle);
  area=radius*radius*3.14*(angle/360);

  printf("%.2lf \n", area);
  return 0;
}