#include <stdio.h>
#define M 100
typedef struct stack {
  int block[M];
  int top = -2;
} stack;

// function to initialize & stack blocks
int m;
void s_builder(stack *s, int m) {
  if (s->top < -1) {
    s->top = -1;
  };

  s->top++;

  s->block[s->top] = m;
};

void pop(stack *s) {
  s->block[s->top] = 0;
  s->top--;
};

void in_stack(stack *s, int n) {
  int i;
  for (i = 0; i <= s->top; i++) {

    if (s->block[s->top] == n) {
      printf("yes found");

    } else {
      printf("not found ");
    };
  };
};

void  is_full (stack*s){
if (s->top==99) { printf("yes full") ;

} 

else{printf("no") ;} ;

} ;

int main() {
  stack s;
  stack *stck = &s;
  s_builder(stck, 7);

  pop(&s);
  printf("%d", (&s)->block[0]);
}