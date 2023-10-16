#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int data;
    struct node *link:
};

void add_at_end(struct node *head, int data);
struct node* add_beg(struct node* head, int d);
void add_beg2(struct node** head, int d);
void count_of_nodes(struct node *head);
void print_data(struct node *head);

int main() {
    struct node *head = malloc(sizeof(struct node))
}