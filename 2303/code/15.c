#include<stdio.h>

int main()
{
    int money_in=0, money_use=0, money_save;
    
    int n;
    scanf("%d",&n);
    while(n != -1){
        money_in += n;
        scanf("%d",&n);
    }

    char *goods[11] = {" ","Table-water","Table-water","Table-water","Coca-Cola","Milk",
    "Beer","Orange-Juice","Sprite","Oolong-Tea","Green-Tea"};
    int price[11] = {0,1,1,1,2,2,3,3,3,4,4};
    int num[11] = {0};

    scanf("%d",&n);
    while(n != -1){
        num[n]++;
        money_use += price[n];
        money_save = money_in - money_use;
        if(money_save < 0){
            printf("Insufficient money");
            return 0;
        }
        scanf("%d",&n);
    }

    printf("Total:%dyuan,change:%dyuan\n",money_in,money_save);
    for(int i = 1;i<=10;i++){
        if(num[i] != 0){
            printf("%s:%d;",goods[i],num[i]);
        }
    }
}