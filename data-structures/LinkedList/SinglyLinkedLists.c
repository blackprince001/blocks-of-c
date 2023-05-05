#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node* next;
};

typedef struct node node_t;

node_t* create_new_node(int value)
{
  node_t* result = malloc(sizeof(node_t));
  result->value = value;
  result->next = NULL;

  return result;
}

node_t* insert_at_head(
    node_t* head, node_t* node_to_insert)
{
  node_to_insert->next = head;
  return node_to_insert;
}

node_t* find_node(node_t* head, int value)
{
  node_t* tmp = head;
  while (tmp != NULL) {
    if (tmp->value == value)
      return tmp;
    tmp = tmp->next;
  }
  return NULL;
}

void insert_at_end(node_t* head, node_t* node_to_insert)
{
  node_t* tmp = head;
  while (tmp != NULL) {
    if (tmp->next == NULL) {
      tmp->next = node_to_insert;
      node_to_insert->next = NULL;
      tmp = node_to_insert;
    }
    tmp = tmp->next;
  }
}

void insert_after_node(node_t* node_to_insert_after, node_t* newnode)
{
  newnode->next = node_to_insert_after->next;
  node_to_insert_after->next = newnode;
}

void printList(node_t* head)
{
  node_t* temp = head;
  while (temp != NULL) {
    printf("%d - ", temp->value);
    temp = temp->next;
  }
  printf("\n");
}

void example_no2()
{

  node_t* head = NULL;
  node_t* tmp;

  for (int i = 0; i < 20; ++i) {
    tmp = create_new_node(i);
    head = insert_at_head(head, tmp);
  }
  printList(head);

  node_t* pfind = find_node(head, 12);
  printf("Found node with value - %d\n", pfind->value);

  for (int i = 20; i < 30; ++i) {
    tmp = create_new_node(i);
    insert_at_end(head, tmp);
  }
  printList(head);
}

void example_no1()
{
  node_t n1, n2, n3;
  node_t* first;

  // adding arbitrary node values to the initialized nodes
  n1.value = 1;
  n2.value = 2;
  n3.value = 3;

  // Linking the nodes to the first node
  first = &n1;
  n1.next = &n2;
  n2.next = &n3;
  n3.next = NULL;

  printList(first);

  // inserting a node after the third node
  node_t n4;
  n4.value = 4;
  n3.next = &n4;
  n4.next = NULL;

  // inserting a node before the third node
  // or you could say, inserting a node after the second node.
  node_t n5;
  n5.value = 12;
  n2.next = &n5;
  n5.next = &n3;

  printList(first);

  // simplying the examples above using functions
  node_t* tmp;
  node_t* head;

  // can be simplified with a for loop. see `example_no2`.
  tmp = create_new_node(1);
  head = tmp;
  tmp = create_new_node(2);
  tmp->next = head;
  head = tmp;
  tmp = create_new_node(3);
  tmp->next = head;
  head = tmp;

  printList(head);
}