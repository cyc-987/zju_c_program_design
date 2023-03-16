#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);

    char a[1000][81],*str;
    for(int i = 0;i<n;i++){
        scanf("%s",a[i]);
    }

    str = a[0];
    for(int i = 0;i<n;i++){
        if(strcmp(str,a[i])>0){
            str = a[i];
        }
    }

    printf("Min is: %s",str);
}