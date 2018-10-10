#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
  struct node *test;

  printf("New list: \n");
  print_list(test);

  test = insert_front(test, 22);
  printf("Adding 22: \n");
  print_list(test);
  
  test = insert_front(test, -68);
  printf("Adding -68: \n");
  print_list(test);

  test = insert_front(test, 0);
  printf("Adding 0: \n");
  print_list(test);

  test = free_list(test);
  printf("Freeing: \n");
  print_list(test);
  
  return 0;
}
