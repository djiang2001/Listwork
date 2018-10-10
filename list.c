#include <stdio.h>
#include <stdlib.h>

struct node { int i; struct node *next;};

void print_list(struct node * t){
  while(t != NULL){
    printf("[%d]\n",t->i);
    t = t->next;
  }
}

struct node * insert_front(struct node * t, int a){

  struct node *new_node = malloc(sizeof(struct node));
  new_node->i = a;
  new_node->next = t;
  return new_node;
}

struct node * free_list(struct node *t){
  while(t->next != NULL){
    free(t);
    t= t->next;
  }
  return NULL;
}
