#include<stdio.h>
#include<stdlib.h>
int sum_func (int);
int sum(int, int (*p)(int));

int main()
{
    int n;
    scanf("%d",&n);

    printf("result:%d\n",sum(n,sum_func));
    return 0;
}

int sum_func(int n)
{
    int sum=0;
    if(n<=0){
        printf("error.\n");
        exit(-1);
    }
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int sum(int n, int (*p)(int))
{
    return p(n);
}