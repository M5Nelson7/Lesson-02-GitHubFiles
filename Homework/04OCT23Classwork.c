#include <stdio.h>
#include <stdlib.h>

//call by value

struct node* delFirst(struct node* ltop);
void delFirstByRef(struct node** ltTop);
struct node* temp=ltop;
ltop = ltop -> ptr;