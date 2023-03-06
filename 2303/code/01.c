#include<stdio.h>
#define PI 3.1415926535
//如果pi不精确到小数点后十位会有一个测试点通不过，垃圾题/doge

void ball();
void cylinder();
void cone();

int main()
{
    char command;
    while(1){
        printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");
        command = getchar();
        switch (command) {
        case '1': ball();break;
        case '2': cylinder();break;;
        case '3': cone();break;
        default:return 0;
    }
    getchar();
    }
    return 0;
}

void ball()
{
    printf("Please enter the radius:\n");
    double r;
    scanf("%lf",&r);
    printf("%.2f\n",(4.0/3)*PI*r*r*r);
}

void cylinder()
{
    printf("Please enter the radius and the height:\n");
    double r,h;
    scanf("%lf%lf",&r,&h);
    printf("%.2f\n",PI*r*r*h);
}

void cone()
{
    printf("Please enter the radius and the height:\n");
    double r,h;
    scanf("%lf%lf",&r,&h);
    printf("%.2f\n",(1.0/3)*PI*r*r*h);
}