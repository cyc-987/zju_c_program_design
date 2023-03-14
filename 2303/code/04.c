#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char *words[20],str[11],*temp;
    int n = 0,size;
    size = sizeof(char);

    gets(str);
    while(str[0] != '#'){
        words[n] = malloc(size*(strlen(str))+1);
        strcpy(words[n],str);
        n++;
        gets(str);
    }

    for(int i = 0;i<n-1;i++){
        for(int k = n-1;k>=i+1;k--){
            if(strlen(words[k]) < strlen(words[k-1])){
                temp = words[k];
                words[k] = words[k-1];
                words[k-1] = temp;
            }
        }
    }

    for(int i = 0;i<n;i++){
        printf("%s ",words[i]);
    }
}