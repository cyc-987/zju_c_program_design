#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stud_node {
     int    num;
     char   name[20];
     int    score;
     struct stud_node *next;
};
struct stud_node *head, *tail;

void input();

int main()
{
    struct stud_node *p;
    
    head = tail = NULL;
    input();
    for ( p = head; p != NULL; p = p->next )
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}

/* 你的代码将被嵌在这里 */
void input()
{
    struct stud_node *p1=NULL,*p2=NULL;
    int num, score;char name[20];
    int size = sizeof(struct stud_node);

    scanf("%d",&num);
    scanf("%s%d",name,&score);
    while(num != 0)
    {
        p2 = (struct stud_node *)malloc(size);
        p2->num = num;
        strcpy(p2->name,name);
        p2->score = score;
        if(head == NULL){
            head = p2;
        }
        if(p1 != NULL){
            p1->next = p2;
        }
        tail = p2;
        p1 = p2;
        scanf("%d",&num);if(num==0)break;
        scanf("%s%d",name,&score);
    }
}