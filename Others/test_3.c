#include<stdio.h>
int main(){
static struct {
int x, y[3];
} a[3] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}, *p=a+3;
int z;
z=((int *)(p-2))[-1]; 
printf("%d",z);}