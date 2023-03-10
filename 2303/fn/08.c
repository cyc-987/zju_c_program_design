#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist(); /*裁判实现，细节不表*/
struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2);
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
    struct ListNode  *list1, *list2;

    list1 = createlist();
    list2 = createlist();
    list1 = mergelists(list1, list2);
    printlist(list1);
    
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
struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2)
{
    int num;
    struct ListNode *p1,*p2,*p,*p3,*head;
    if(list1==NULL){
        if(list2 == NULL){
            return NULL;
        }else{
            return list2;
        }
    }
    if(list2==NULL){
        if(list1 == NULL){
            return NULL;
        }else{
            return list1;
        }
    }

    if(list1->data <= list2->data){
        p = list2;
        p1 = list1;
        head = list1;
    }else{
        p = list1;
        p1 = list2;
        head = list2;
    }
    p2 = p1->next;
    while(1)
    {
        if(p->data >= p1->data && (p2 == NULL || p->data < p2->data)){
            p1->next = p;
            p3 = p->next;
            p->next = p2;
            p1 = p;
            p = p3;
        }
        else{
            p1 = p2;
            p2 = p2->next;
        }
        if(p==NULL)break;
    }
    return head;
}