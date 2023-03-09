#include<stdio.h>

int** chu2(int*);
int main()
{
    static int eight[51][151];
    eight[1][1]=1;eight[1][2]=2;eight[1][3]=5;
    for(int i=1;i<=49;i++)
    {
        int start=0,end;
        while(eight[i][start]==0){
            start++;
        }
        end = start;
        while(eight[i][end]!=0){
            end++;
        }
        eight[i+1][end] = 5;
    }
}
int ** chu2(int * k)
{
    int start=0,end;
        while(k[start]==0){
            start++;
        }
        end = start;
        while(k[end]!=0){
            end++;
        }
        int m[151];
        m[end] = 5;m[end-1] = 2;
}