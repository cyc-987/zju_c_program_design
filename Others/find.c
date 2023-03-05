#include<stdio.h>
int main(int argc, char* argv[])
{
    char ch = *argv[1];
    char* str = argv[2];
    while(*(str) != '\0'){
        if(ch == *str){
            printf("%s",str);
            return 0;
        }
    }
    printf("Not Found");
    return 0;
}