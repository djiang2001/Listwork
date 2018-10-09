#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct node { int i; struct node *next };

void print_list(struct node * t){
  while(t->next*){
    printf("%d",t->i);
    t++;
  }
}

struct node * insert_front(struct node * t, int i){


}
