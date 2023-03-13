#include <stdio.h>

#define MAXS 10

char *match( char *s, char ch1, char ch2 );

int main()
{
    char str[MAXS], ch_start, ch_end, *p;
    
    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

/* 你的代码将被嵌在这里 */
char *match( char *s, char ch1, char ch2 )
{
    int flag = 0;
    char*ch;
    while(*s != '\0')
    {
        if(*s == ch1){
            flag = 1;
            ch = s;
            break;
        }
        s++;
    }
    if(flag==0){
        char *n = NULL;
        printf("%s\n",n);
        return NULL;
    }
    while(*s != '\0')
    {
        printf("%c",*s);
        s++;
        if(*s==ch2){
            printf("%c",*s);
            break;
        }else if(*s == '\0')break;
    }
    printf("\n");
    return ch;
}