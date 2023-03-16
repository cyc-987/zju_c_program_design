#include<stdio.h>

int main()
{
    int a1,b1,a2,b2;
    scanf("%d/%d %d/%d",&a1,&b1,&a2,&b2);

    if(a1*b2 > a2*b1){
        printf("%d/%d > %d/%d\n",a1,b1,a2,b2);
    }else if(a1*b2 < a2*b1){
        printf("%d/%d < %d/%d\n",a1,b1,a2,b2);
    }else{
        printf("%d/%d = %d/%d\n",a1,b1,a2,b2);
    }
}