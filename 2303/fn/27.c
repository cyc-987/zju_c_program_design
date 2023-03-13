#include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));
        
    return 0;
}


/* 你的代码将被嵌在这里 */
int search( int n )
{
    int i,count = 0,num;
    for(i=101;i<=n;i++){
        if(sqrt(i) == (int)sqrt(i)){
            num = i;
            int t[3];
            for(int k = 0;k<3;k++){
                t[k] = num%10;
                num = num/10;
            }
            if(t[0] == t[1] || t[0] == t[2] || t[1] == t[2])count++;
        }
    }
    return count;
}