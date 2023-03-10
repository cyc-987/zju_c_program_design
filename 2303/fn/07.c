#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();

int main()
{
    struct ListNode *p, *head = NULL;

    head = createlist();
    for ( p = head; p != NULL; p = p->next )
        printf("%d ", p->data);
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *createlist()
{
    int num, size;
    size = sizeof(struct ListNode);
    struct ListNode *p1, *p2=NULL,*head=NULL;

    scanf("%d",&num);
    if(num==-1)return NULL;

    while(num != -1){
        p1 = (struct ListNode*)malloc(size);
        p1->data = num;
        p1->next = head;
        head = p1;
        scanf("%d",&num); 
    }
    return head;
}