#include "LinkedList.h"

struct node* listFirst = NULL;
struct node* listLast = NULL;
int listSize = 0;

//insert at the first location
void insert(char * key, void * data, int type) {
   //create aux node

   struct node* aux = (struct node*) malloc(sizeof(struct node *));
   aux->key = (char *) malloc(sizeof(char *));
	
    strcpy((char *)aux->key,(char *) key);

     if(type == num) {
         aux->data = (char *) malloc(sizeof(int *));
         memcpy(aux->data, data, sizeof(int) * sizeof( *data) );
     } else if(type == text) {
        int len = strlen( (char *) data);
         aux->data = (char *) malloc(sizeof(char *));
         memcpy(aux->data, data, sizeof(char) * len );
     }

   
   memcpy(aux->data, data,sizeof( *data) );
    
   aux->type = type;

    if(listSize == 0) {
        listFirst = listLast = aux;
    } else {
        listLast->next = aux;
        listLast = aux;
    }
    listSize++;
    
}

//delete first item
// struct node* deleteFirst() {

//    //save reference to first link
//    struct node *tempLink = head;
	
//    //mark next to first link as first 
//    head = head->next;
	
//    //return the deleted link
//    return tempLink;
// }

//is list empty
bool isEmpty() {
   return listSize == 0;
}

int length() {
    return listSize;
}

//find a link with given key
struct node* find(char * key) {

   //start from the first link
   struct node* aux = listFirst;
   
   if(isEmpty())
   {
       return NULL;
   }

   //navigate through list
   while(strcmp(aux->key, key)!=0) {

      //if it is last node
      if(aux->next == NULL) {
         return NULL;
      } else {
         //go to next link
         aux = aux->next;
      }
   }

   //if data found, return the current Link
   return aux;
}

//este NO usamos ni tocamos, no debería ni andar:
//delete a link with given key
// struct node* delete(char * key) {

//    //start from the first link
//    struct node* current = head;
//    struct node* previous = NULL;
	
//    //if list is empty
//    if(head == NULL) {
//       return NULL;
//    }

//    //navigate through list
//    while(current->key != key) {

//       //if it is last node
//       if(current->next == NULL) {
//          return NULL;
//       } else {
//          //store reference to current link
//          previous = current;
//          //move to next link
//          current = current->next;
//       }
//    }

//    //found a match, update the link
//    if(current == head) {
//       //change first to point to next link
//       head = head->next;
//    } else {
//       //bypass the current link
//       previous->next = current->next;
//    }    
	
//    return current;
// }


/*
//display the list
void printList() {
   struct node *ptr = listFirst;
   printf("\n[ ");
	
   int i;

   //start from the beginning
   for(i=0; i<listSize; i++) {
      
      if(ptr->type == num){
         printf("(nombre:%s, valor:%d) \n",ptr->key, *((int *) (ptr->data)));
      }
      if(ptr->type == text){
         printf("(nombre:%s, valor:%s) \n",ptr->key, (char *) ptr->data);
      }
      ptr = ptr->next;
   }

   printf(" ]");
}

int main() {
   printf("hola mundo\n");
   //printList();
   //insert(char * key, void * data, int type);
   
//keys

   char * key1 = "var1";
   char * key2 = "var2";
   char * key3 = "var3";



//data
   int valor1=42069;
   char* valor2="valor2";
   char* valor3="valor3";

   insert(key1, &valor1, num);
   insert(key2, valor2, text);
   insert(key3, valor3, text);
   printList();
// return 0;
}
*/