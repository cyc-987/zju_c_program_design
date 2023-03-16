#include<stdio.h>
#include<string.h>

int main()
{
    char a[5][81],str[81];
    for(int i = 0;i<5;i++){
        scanf("%s",a[i]);
    }

    for(int i = 0;i<4;i++){
        for(int k = 4;k>0;k--){
            if(strcmp(a[k],a[k-1])<0){
                strcpy(str,a[k]);
                strcpy(a[k],a[k-1]);
                strcpy(a[k-1],str);
            }
        }
    }

    printf("After sorted:\n");
    for(int i = 0;i<5;i++){
        printf("%s\n",a[i]);
    }
}
