
#include <stdio.h>
#include <stdlib.h>

typedef struct node node;

typedef struct node {
  int value;
  node* next;
  node* prev;
} node;

void print_list(node*);
node* create_node(int, node*);
int dequeue(node**);
void enqueue(int, node**);

int main() {
  node* head = create_node(5, NULL);
  node* tail = head;

  enqueue(3, &head);
  print_list(head);
  enqueue(7, &head);
  print_list(head);
  dequeue(&tail);
  print_list(head);
  enqueue(1, &head);
  print_list(head);
}

int dequeue(node** tail) {
  int result = (*tail)->value;
  (*tail) = (*tail)->prev;
  free((*tail)->next);
  (*tail)->next = NULL;
  return result;
}

void enqueue(int data, node** head) {
  node* newnode = malloc(sizeof(node));
  newnode->next = (*head);
  newnode->value = data;
  newnode->prev = NULL;
  (*head)->prev = newnode;
}

// Iterate through all the elements in a linked list
// and print the values of each one.
void print_list(node* head) {

  node* i = head;

  do {
    printf("%d, ", i->value);
    i = i->next;
  } while (i != head && i != NULL);
  printf("\n");
}

node* create_node(int value, node* next) {
  node* n;
  n = malloc(sizeof(node));
  n->value = value;
  n->next = next;
  n->prev = NULL;
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
