#include "LinkedList.h"

list *createList()
{
   list *toReturn = malloc(sizeof(list));
   *toReturn = (struct node *)malloc(sizeof(struct node));
   (*toReturn)->next = NULL;
   (*toReturn)->data = NULL;
   (*toReturn)->key = "HEAD";
   return toReturn;
}

//insert at the first location
void insert(list *l, char *key, void *data, int type)
{
   //create aux node
   struct node *aux = (struct node *)malloc(sizeof(struct node));
   int keyLen = strlen(key);
   aux->key = (char *)malloc(sizeof(char) * keyLen);

   strcpy((char *)aux->key, (char *)key);

   if (type == num)
   {
      aux->data = (int *)malloc(sizeof(int));
      memcpy(aux->data, data, sizeof(int));
   }
   else if (type == text)
   {
      int len = strlen((char *)data);
      aux->data = (char *)malloc(sizeof(char *));
      memcpy(aux->data, data, sizeof(char) * len);
   }

   memcpy(aux->data, data, sizeof(*data));

   aux->type = type;

   if (l == NULL)
   {
      *l = aux;
   }
   else
   {
      aux->next = *l;
      *l = aux;
   }
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
bool isEmpty(list *l)
{
   return (*l)->data == NULL;
}

//find a link with given key
struct node *find(list *l, char *key)
{
   //start from the first link
   if (isEmpty(l))
   {
      return NULL;
   }

   struct node *aux = *l;

   //navigate through list

   while (strcmp(aux->key, key) != 0)
   {
      //if it is last node
      if (aux->next == NULL)
      {
         return NULL;
      }
      //go to next link
      aux = aux->next;

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

//display the list
void printList(list *l)
{
   if (isEmpty(l))
   {
      printf("[]\n");
   }
   struct node *ptr = *l;
   printf("\n[ ");

   //start from the beginning
   while (ptr != NULL)
   {

      if (ptr->type == num)
      {
         printf("(nombre:%s, valor:%d) \n", ptr->key, *((int *)(ptr->data)));
      }
      if (ptr->type == text)
      {
         printf("(nombre:%s, valor:%s) \n", ptr->key, (char *)ptr->data);
      }
      ptr = ptr->next;
   }
   printf(" ]\n");
}

void freeList(list *l){

   struct node *aux = *l;
   struct node *next;
   while (aux != NULL)
   {
      next = aux->next;
      free(aux);
      aux=next;
   }
   free(l);
}

// int main()
// {
//    list *l = createList();
//    //printList();
//    //insert(char * key, void * data, int type);

//    //keys
//    char *key1 = "var1";
//    char *key2 = "var2";
//    char *key3 = "var3";

//    //data
//    int valor1 = 123;
//    char *valor2 = "valor2";
//    char *valor3 = "valor3";

//    insert(l, key1, &valor1, num);
//    printf("Se agrego uno\n");
//    insert(l, key2, valor2, text);
//    printf("Se agrego uno\n");
//    insert(l, key3, valor3, text);
//    printf("Se agrego uno\n");
//    printList(l);
//    printf("El valor del primer nodo es: %s\n", (*l)->next->data);
//    struct node *a = find(l, "var2");
  
//    printf("Se termino el find\n");
   
//    if(a==NULL){
//       printf("a es NULL\n");
//    }

//    if(a->key == NULL){
//       printf("a key es null");
//    }
   
//    printf("Deberia funcionar todo\n");
//    printf("La key es:%s\n", a->key);
//    printf("el valor es:%s\n", (char *) (a->data));
//    freeList(l);
//    return 0;
// }
o