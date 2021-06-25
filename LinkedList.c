#include "LinkedList.h"

struct node* listHead = NULL;
struct node* listTail = NULL;
int listSize = 0;

enum type {num = 1, text = 0}; 

//insert at the first location
void insert(char * key, void * data, int type) {
   //create aux node
   struct node* aux = (struct node*) malloc(sizeof(struct node));
	
    strcpy(aux->key, key);
    memcpy(aux->data, data);
    aux->type = type;

    if(listSize == 0) {
        listHead = listTail = aux;
    } else {
        listTail->next = aux;
        listTail = aux;
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
   return list->size == 0;
}

int length() {
    return list->size;
}

//find a link with given key
struct node* find(char * key) {

   //start from the first link
   struct node* aux = list->first;
   
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

// void sort() {

//    int i, j, k, tempKey, tempData;
//    struct node *current;
//    struct node *next;
	
//    int size = length();
//    k = size ;
	
//    for ( i = 0 ; i < size - 1 ; i++, k-- ) {
//       current = head;
//       next = head->next;
		
//       for ( j = 1 ; j < k ; j++ ) {   

//          if ( current->data > next->data ) {
//             tempData = current->data;
//             current->data = next->data;
//             next->data = tempData;

//             tempKey = current->key;
//             current->key = next->key;
//             next->key = tempKey;
//          }
			
//          current = current->next;
//          next = next->next;
//       }
//    }   
// }

// void reverse(struct node** head_ref) {
//    struct node* prev   = NULL;
//    struct node* current = *head_ref;
//    struct node* next;
	
//    while (current != NULL) {
//       next  = current->next;
//       current->next = prev;   
//       prev = current;
//       current = next;
//    }
	
//    *head_ref = prev;
// }

//display the list
// void printList() {
//    struct node *ptr = head;
//    printf("\n[ ");
	
//    //start from the beginning
//    while(ptr != NULL) {
//       printf("(%d,%d) ",ptr->key,ptr->data);
//       ptr = ptr->next;
//    }
	
//    printf(" ]");
// }

/* void main() {
   insertFirst(1,10);
   insertFirst(2,20);
   insertFirst(3,30);
   insertFirst(4,1);
   insertFirst(5,40);
   insertFirst(6,56); 

   printf("Original List: "); 
	
   //print list
   printList();

   while(!isEmpty()) {            
      struct node *temp = deleteFirst();
      printf("\nDeleted value:");
      printf("(%d,%d) ",temp->key,temp->data);
   }  
	
   printf("\nList after deleting all items: ");
   printList();
   insertFirst(1,10);
   insertFirst(2,20);
   insertFirst(3,30);
   insertFirst(4,1);
   insertFirst(5,40);
   insertFirst(6,56);
   
   printf("\nRestored List: ");
   printList();
   printf("\n");  

   struct node *foundLink = find(4);
	
   if(foundLink != NULL) {
      printf("Element found: ");
      printf("(%d,%d) ",foundLink->key,foundLink->data);
      printf("\n");  
   } else {
      printf("Element not found.");
   }

   delete(4);
   printf("List after deleting an item: ");
   printList();
   printf("\n");
   foundLink = find(4);
	
   if(foundLink != NULL) {
      printf("Element found: ");
      printf("(%d,%d) ",foundLink->key,foundLink->data);
      printf("\n");
   } else {
      printf("Element not found.");
   }
	
   printf("\n");
   sort();
	
   printf("List after sorting the data: ");
   printList();
	
   reverse(&head);
   printf("\nList after reversing the data: ");
   printList();
} */