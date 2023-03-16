#include<stdio.h>
#include<string.h>

struct book{
    char name[31];
    double price;
};

int main()
{
    struct book b[11];
    int n;
    scanf("%d",&n);
    getchar();

    for(int i = 0;i<n;i++){
        gets(b[i].name);
        scanf("%lf",&b[i].price);
        getchar();
    }

    double max,min;
    int maxn,minn;
    max = min = b[0].price;
    maxn = minn = 0;
    for(int i = 0;i<n;i++){
        if(max < b[i].price){
            max = b[i].price;
            maxn = i;
        }
        if(min > b[i].price){
            min = b[i].price;
            minn = i;
        }
    }

    printf("%.2f, %s\n",max,b[maxn].name);
    printf("%.2f, %s\n",min,b[minn].name);
}