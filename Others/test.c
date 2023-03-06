#include<stdio.h>
#define PI 3.14

void ball()
{
    double r;
    scanf("%lf",&r);
    printf("%.2f",(4.0/3)*PI*r*r*r);
}
int main()
{
    ball();
}