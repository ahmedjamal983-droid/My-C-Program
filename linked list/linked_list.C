
#include <cstddef>
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  node *next_ptr;
} node;

void trav(node *ptr) {
  do {
    printf(" %d \n", ptr->data);
    ptr = ptr->next_ptr;
  } while (ptr != NULL) ;
};

void search_ll(int key, node *ptr) {
  do {
    if (ptr->data == key) {
      printf("Yea found");
       return;
    }
    ptr = ptr->next_ptr;
   

  } while (ptr != NULL);
  
};
int main() {
  int a;
  a = sizeof(node);
  node *ptr_1st = (node *)(malloc(a));

  node *ptr_2nd = (node *)(malloc(a));

  node *ptr_3rd = (node *)(malloc(a));

  ptr_1st->data = 7;
  ptr_1st->next_ptr = ptr_2nd;

  ptr_2nd->data = 90;
  ptr_2nd->next_ptr = ptr_3rd;

  ptr_3rd->data = 89;
  ptr_3rd->next_ptr = NULL;

  node* prv , *curr,*nxt ;
  prv=NULL ;
  nxt=curr;
  curr=ptr_1st;
  while (curr!=NULL) {
  nxt=curr->next_ptr;
  curr->next_ptr=prv;
  prv=curr;
  curr=nxt;

  };

  

}