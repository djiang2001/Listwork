struct node { int i; struct node *next;};
void print_list(struct node *t);
struct node * insert_front(struct node *, int a);
struct node * free_list(struct node *t);
