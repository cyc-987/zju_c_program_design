#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();
struct ListNode *deleteeven( struct ListNode *head );
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
    struct ListNode *head;

    head = createlist();
    head = deleteeven(head);
    printlist(head);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *createlist()
{
    struct ListNode* head=NULL,*p1,*p2=NULL;
    unsigned int size = sizeof(struct ListNode);
    int num;
    scanf("%d",&num);
    while(num > 0)
    {
        p1 = (struct ListNode*)malloc(size); 
        p1->data = num;
        if(head == NULL){
            head = p1;
        }else{
            p2->next = p1;
        }
        p1->next = NULL;
        p2 = p1;
        scanf("%d",&num);
        if(num <0)break;
    }
    return head;
}
struct ListNode *deleteeven( struct ListNode *head )
{
    struct ListNode *p1,*p2;
    if(head == NULL)return NULL;
    while(head!=NULL && head->data %2 ==0){
        head = head->next;
    }
    if(head == NULL)return NULL;

    p1 = head;p2 = head->next;
    while(p2 != NULL)
    {
        if(p2->data%2 == 0){
            p1->next = p2->next;
            free(p2);
            if(p1->next == NULL){
                return head;
            }else{
                p2 = p1->next;
            }
        }else{
            p1 = p2;
            p2 = p2->next;
        }
    }
    return head;
}
