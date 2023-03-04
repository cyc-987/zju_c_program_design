#include<stdio.h>
#define MAXN 1000
int Count = 0;        /* 用全局变量Count表示数组a中待处理的元素个数 */
void select(int a[], int option, int value); /* 决定对有序数组a进行何种操作的控制函数 */
int input_array(int a[ ]);    /* 输入有序数组a的函数 */
void print_array(int a[ ]);    /* 输出有序数组a的函数  */
void insert(int a[ ], int value);    
void delete(int a[ ], int value);
void query(int a[ ], int value);    

int main(void) 
{
    int option, value, a[MAXN];
    
    if(input_array(a) == -1){ 
       return 0;
    }
    printf("[1] Insert\n");
    printf("[2] Delete\n");
    printf("[3] Query\n");
    printf("[Other option] End\n");
    while (1) {
        scanf("%d", &option); 
        if (option < 1 || option > 3) {
            break;
        }
        scanf("%d", &value);
        select(a, option, value); 
        printf("\n");
    }
    printf("Thanks.");

    return 0;
}
/* 控制函数 */
void select(int a[ ], int option, int value) 
{
    switch (option) {
        case 1:
          insert(a, value); 
            break;
        case 2:
            delete(a, value);  
            break;
        case 3:
            query(a, value);  
            break;
    }
}
/* 有序表输入函数 */
int input_array(int a[ ]) 
{
    scanf("%d", &Count);
    for (int i = 0; i < Count; i ++) {
        scanf("%d", &a[i]);
        if(i > 0 && a[i] <= a[i-1]){
            printf("Error");
            return -1;
        }
    }
    return 0;
}
/* 有序表输出函数 */
void print_array(int a[ ]) 
{
    for (int i = 0; i < Count; i ++) { 
        if(i == 0){     
           printf("%d", a[i]);
        }else{
           printf(" %d", a[i]);
        }
    }
}

/* 请在这里填写答案 */

void insert(int a[], int value)
{
    int i=0;
    while(i<Count-1){
        if(value>=a[i] && value<=a[i+1]){
            break;
        }else{
            i++;
        }
    }
    i++;
    if(value<a[0]){
        i=0;
    }
    for(int j = Count-1;j>=i;j--){
        a[j+1] = a[j];
    }
    a[i] = value;
    Count++;
    print_array(a);
}

void delete(int a[], int value)
{
    int i = 0,index = 0;
    for(i=0;i<Count;i++){
        if(value==a[i]){
            index=1;
            break;
        }
    }
    if(index)
    {
        for(int j=i;j<Count;j++){
            a[j] = a[j+1];
        }
        Count--;
        print_array(a);
    }else{
        printf("Deletion failed.");
    }
}

void query(int a[],int value)
{
    int l,b,x;
    l = 0;b = Count-1;
    while(l<=b)
    {
        x = (l+b)/2;
        if(value<a[x]){
            b = x-1;
        }else if(value>a[x]){
            l = x+1;
        }else{
            break;
        }
    }
    if(a[x]==value){
        printf("%d",x);
    }else{
        printf("Not found.");
    }
}