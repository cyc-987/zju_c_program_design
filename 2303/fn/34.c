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

struct ListNode *deleteeven( struct ListNode *head )
{
    struct ListNode *p1,*p2,*p3=NULL;
    if(head == NULL)return NULL;
    p1 = head;
    p2 = p1->next;
    while(1)
    {
        if(p1->data%2 == 0){
            if(p1 == head){
                head = p2;
                if(head == NULL)break;
                p1 = head;
                p2 = p1->next;
            }else{
                p3->next = p2;
                if(p2 == NULL)break;
                p1 = p2;
                p2 = p2->next;
            }
        }else{
            p3 = p1;
            p1 = p2;
            if(p2 == NULL)break;
            p2 = p2->next;
        }
        
    }
    return head;
}