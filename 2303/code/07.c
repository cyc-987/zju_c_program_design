#include<stdio.h>

int main()
{
    int h,m,s,n;
    scanf("%d:%d:%d",&h,&m,&s);
    scanf("%d",&n);

    s += n;
    if(s>=60){
        m++;
        s -= 60;
    }
    if(m>=60){
        h++;
        m -= 60;
    }
    if(h>=24){
        h -= 24;
    }

    printf("%02d:%02d:%02d",h,m,s);
}