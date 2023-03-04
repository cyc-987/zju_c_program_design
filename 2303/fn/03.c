#include <stdio.h>
#include <string.h>
void fsort(char *color[ ], int n);

int main(void )
{
    int i;
    char *pcolor[ ] = {"red", "blue", "yellow", "green", "black"};
    void fsort(char *color[ ], int n);

    fsort(pcolor, 5);   /* 调用函数 */
    for(i = 0; i < 5; i++) 
        printf("%s ", pcolor[i]);
    printf("\n");
    return 0;
}    


/* 请在这里填写答案 */
void fsort(char *color[],int n)
{
    char a[10];
    char *p=a;
    int i,j;
    for(i=0;i<n-2;i++){
        for(j=n-2;j>=0;j--){
            if(strcmp(color[j],color[j+1])>0){
                p = color[j];
                color[j] = color[j+1];
                color[j+1] = p;
            }
        }
    }
}