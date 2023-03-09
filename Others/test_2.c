#include <math.h>
#include <stdio.h>
void fun(int n);

int main(void)
{
    int n;
    
    scanf("%d", &n);
    printf("%d=", n);
    if(n<0){
        printf("-");
    }
    n = fabs(n);
    fun(n);
    
    return 0;    
}

void fun(int n)
{
    int k, limit, r;

    limit = sqrt(n);
    for (k = 2; k <= limit; k++){
        r = n%k;
        while (r == 0){
            printf("%d", k);
            n = n/k;
            if (n > 1){
                printf("*");
             }
             r = n % k;
        }
    }
    if ( n != 1 ){
        printf("%d\n", n);
    }
}