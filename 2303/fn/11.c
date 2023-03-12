#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist(); /*裁判实现，细节不表*/
struct ListNode *reverse( struct ListNode *head );
void printlist( struct ListNode *head )
{
     struct ListNode *p = head;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode  *head;

    head = createlist();
    head = reverse(head);
    printlist(head);
    
    return 0;
}

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
        
        if(head == NULL){
            head = p1;
        }
        if(p2 != NULL){
            p2->next = p1;
        }
        p2 = p1;
        
        scanf("%d",&num); 
    }
    return head;
}
/* 你的代码将被嵌在这里 */

struct ListNode *reverse( struct ListNode *head )
{
    struct ListNode *headn,*p1,*p2,*p3;
    if(head==NULL)return NULL;
    if(head->next==NULL)return head;

    p1 = head;
    p2 = p1->next;
    while(1)
    {
        if(p1==head){
            p1->next = NULL;
        }else{
            p1->next = p3;
        }
        p3 = p1;
        p1 = p2;
        if(p2==NULL){
            headn = p3;
            break;
        }
        p2 = p2->next;
    }
    return headn;
}