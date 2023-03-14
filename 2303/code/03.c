#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[80],*poem[20];
    int size = sizeof(char),n=0;

    gets(str);

    while(str[0] != '#')
    {
        poem[n] = malloc(size*(strlen(str)+1));
        strcpy(poem[n],str);
        n++;
        gets(str);
    }

    for(int i = 0;i<n;i++){
        printf("%c",*poem[i]);
    }
}