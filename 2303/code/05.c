#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[80],*poem[20];
    int size = sizeof(char);

    gets(str);

    for(int i = 0;i<4;i++)
    {
        poem[i] = malloc(3*size*(strlen(str)+1));
        strcpy(poem[i],str);
        gets(str);
    }

    for(int i = 0;i<4;i++){
        printf("%c",*poem[i]);
    }
}