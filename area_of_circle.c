#include<stdio.h>
//area of circle
int main() {
  int r;
float pi = 3.14;
  float area;
printf("Enter radius value: ");
scanf("%d ", &r);
area = pi * r * r;
printf("area of circle is: %.2f ", area);
}
