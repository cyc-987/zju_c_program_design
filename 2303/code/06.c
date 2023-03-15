#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct people{
    char name[20];
    double jiben;
    double fudong;
    double zhichu;
    struct people *next;
};

struct people* read(int n);
void print(struct people *);

int main()
{
    int n;
    scanf("%d",&n);
    struct people *head;
    head = read(n);
    print(head);
    return 0;
}

struct people* read(int n)
{
    struct people *head=NULL, *p1, *p2=NULL;
    char name[20];double jiben,fudong,zhichu;
    int size = sizeof(struct people);
    for(int i = 0;i<n;i++){
        p1 = (struct people*)malloc(size);
        if(p2 != NULL)p2->next = p1;
        scanf("%s%lf%lf%lf",name,&jiben,&fudong,&zhichu);
        strcpy(p1->name,name);
        p1->jiben = jiben;
        p1->fudong = fudong;
        p1->zhichu = zhichu;

        if(head == NULL)head = p1;
        p2 = p1;
    }
    p1->next = NULL;
    return head;
}

void print(struct people *head)
{
    double sum;
    while(1)
    {
        if(head == NULL)break;
        sum = head->jiben + head->fudong - head->zhichu;
        printf("%s %.2f\n",head->name,sum);
        head = head->next;
    }
}