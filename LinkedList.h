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

typedef struct list{
    node* first=NULL;
    node* last=NULL;
    int size=0;
}list;

//void printList();

void insert(char * key, void * data, int type);

bool isEmpty();

int length();

int find(char * key);

int getValueInt;

char* getValueString;