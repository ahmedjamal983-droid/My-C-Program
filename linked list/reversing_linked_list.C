#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  node *next_ptr;
} node;


int main() {
  int a;
  a = sizeof(node);
  node *ptr_1st = (node *)(malloc(a));

  node *ptr_2nd = (node *)(malloc(a));

  node *ptr_3rd = (node *)(malloc(a));
  node*ptr_4=(node *)(malloc(a));
  ptr_1st->data = 7;
  ptr_1st->next_ptr = ptr_2nd;

  ptr_2nd->data = 90;
  ptr_2nd->next_ptr = ptr_3rd;

  ptr_3rd->data = 89;
  ptr_3rd->next_ptr = ptr_4;
ptr_4->data = 70;
  ptr_4->next_ptr = NULL;

 
}