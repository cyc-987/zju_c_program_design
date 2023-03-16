#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    char num[5];
    double score;
};

int main()
{
    int n;
    scanf("%d",&n);
    struct student a [10];

    for(int i = 0;i<n;i++){
        scanf("%s%s%lf",a[i].num,a[i].name,&a[i].score);
    }

    double sum=0,aver;
    for(int i = 0;i<n;i++){
        sum += a[i].score;
    }
    aver = sum/n;
    printf("%.2f\n",aver);

    for(int i = 0;i<n;i++){
        if(a[i].score<aver){
            printf("%s %s\n",a[i].name,a[i].num);
        }
    }

}