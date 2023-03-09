#include <stdio.h>
#include <stdlib.h>

struct stud_node {
     int    num;
     char   name[20];
     int    score;
     struct stud_node *next;
};

struct stud_node *createlist();
struct stud_node *deletelist( struct stud_node *head, int min_score );

int main()
{
    int min_score;
    struct stud_node *p, *head = NULL;

    head = createlist();
    scanf("%d", &min_score);
    head = deletelist(head, min_score);
    for ( p = head; p != NULL; p = p->next )
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}

/* 你的代码将被嵌在这里 */
#include<string.h>
struct stud_node *createlist()
{
    int num,score,size;
    char name[20];
    struct stud_node *p1,*p2=NULL,*head=NULL;

    scanf("%d",&num);
    scanf("%s%d",name,&score);
    size = sizeof(struct stud_node);

    while(num != 0)
    {
        p1 = (struct stud_node*)malloc(size);
        p1->num = num;
        strcpy(p1->name,name);
        p1->score = score;
        if(head == NULL){
            head = p1;
        }
        if(p2 != NULL){
            p2->next = p1;
        }
        p2 = p1;
        scanf("%d",&num);if(num==0)break;
        scanf("%s%d",name,&score);
    }
    return head;
}
struct stud_node *deletelist( struct stud_node *head, int min_score )
{
    if(head == NULL){
        return head;
    }
    struct stud_node *p1,*p2;

    while(head != NULL & head->score < min_score){
        p1 = head;
        head = head->next;
        free(p1);
        if(head == NULL)return head;
    }

    p1 = head;
    p2 = p1->next;
    while(p2 != NULL){
        if(p2->score < min_score){
            p1->next = p2->next;
            free(p2);
        }else{
            p1 = p2;
        }
        p2 = p1->next;
    }
    return head;
}