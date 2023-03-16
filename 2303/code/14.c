#include<stdio.h>
#include<string.h>
#include<math.h>

int c2i(char ch);
int convert(char ch[],int a, int b);

int main()
{
    char er[48];
    scanf("%s",er);

    for(int i = 0;i<4;i++){
        if(i<3)printf("%d.",convert(er,8*i,8*(i+1)-1));
        else printf("%d",convert(er,8*i,8*(i+1)-1));
    }

    return 0;
}

int c2i(char ch){
    int i = ch - '0';
    return i;
}

int convert(char ch[],int a, int b)
{
    int n = 1,result = 0;
    for(int i = b;i>=a;i--){
        result += n*c2i(ch[i]);
        n *= 2;
    }
    return result;
}