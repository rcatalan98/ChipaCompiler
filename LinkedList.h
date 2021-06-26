#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

enum type {num = 1, text = 0}; 

struct node {
    int type;
   void * data;
   char * key;
   struct node *next;
};

typedef struct node *list;

list *createList();

void printList(list *l);

void insert(list* l,char * key, void * data, int type);

bool isEmpty();

struct node* find(list* l, char * key);

int getValueInt();

char* getValueString();

void freeList(list *l);