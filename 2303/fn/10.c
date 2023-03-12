#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem( struct ListNode *L, int m );
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *readlist()
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

struct ListNode *deletem( struct ListNode *L, int m )
{
    struct ListNode *head, *p1=NULL, *p2=NULL;
    if(L == NULL)return NULL;
    while(L->data == m){
        L = L->next;
        if(L == NULL)return NULL;
    }

    p1 = L;
    head = L;
    while(p1)
    {
        if(p1->data == m){
            if(p2==NULL){
                p1 = p1->next;
            }else{
                p1 = p1->next;
                p2->next = p1;
            }
        }else{
            p2 = p1;
            p1 = p1->next;
        }
    }
    return head;
}