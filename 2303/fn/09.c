#include <stdio.h>
#include <stdlib.h>

struct ListNode {
  int data;
  struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd(struct ListNode **L);
void printlist(struct ListNode *L) {
  struct ListNode *p = L;
  while (p) {
    printf("%d ", p->data);
    p = p->next;
  }
  printf("\n");
}

int main() {
  struct ListNode *L, *Odd;
  L = readlist();
  Odd = getodd(&L);
  printlist(Odd);
  printlist(L);

  return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *readlist() {
  int num, size;
  size = sizeof(struct ListNode);
  struct ListNode *p1, *p2 = NULL, *head = NULL;

  scanf("%d", &num);
  if (num == -1)
    return NULL;

  while (num != -1) {
    p1 = (struct ListNode *)malloc(size);
    p1->data = num;

    if (head == NULL) {
      head = p1;
    }
    if (p2 != NULL) {
      p2->next = p1;
    }
    p2 = p1;

    scanf("%d", &num);
  }
  return head;
}

struct ListNode *getodd(struct ListNode **L) {
  struct ListNode *p1 = *L,*p2=NULL, *ji=NULL, *ji1=NULL, *ji2=NULL;
  int flag = 0;
  while(p1)
  {
    if(p1->data%2 == 0){
        if(p2==NULL){
            *L = p1;
            flag = 1;
        }else{
            p2->next = p1;
        }
        p2 = p1;
    }else{
        if(ji1 == NULL){
            ji = p1;
        }else{
            ji1->next = p1;
        }
        ji1 = p1;
    }
    p1 = p1->next;
  }
  if(ji1)ji1->next = NULL;
  if(p2)p2->next = NULL;
  if(flag == 0){
    ji = *L;
    *L = NULL;
  }
  return ji;
}