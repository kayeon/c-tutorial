
#include <stdio.h>
#include <stdlib.h>

typedef struct node node;

typedef struct node {
  int value;
  node* next;
} node;

void print_list(node*);
node* create_node(int);

int main() {
  node* head = create_node(5, 0);
  node* second = create_node(8, head);
  head->next = second;

  print_list(head);

  node* middle = create_node(3, second);
  head->next = middle;
}

// Iterate through all the elements in a linked list
// and print the values of each one.
void print_list(node* head) {

  node* i = head;

  do {
    printf("%d\n", i->value);
    i = i->next;
  } while (i != head && i != 0);
}

node* create_node(int value, node* next) {
  node* n;
  n = malloc(sizeof(node));
  n->value = value;
  n->next = next;
  //n->next = 0; // null pointer, can cause segmentation fault! (null pointer exception in Java)

  return n;

  /*
  not a pointer?
  use dot
  node x;
  x.value;

  is a pointer?
  use arrow
  node* p;
  p->value;
  */
}
