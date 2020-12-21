#ifndef LINKED_LIST
#define LINKED_LIST
typedef struct list *tList;

tList inicializeList();

int lenght(tList);

void appendElement(void*, tList);
void extend(tList p, tList s, void* cpy(void*));

void* erase(void*, tList, int cmp(void*, void*));

void* search(void*, tList, int cmp(void*, void*));

void interactList(tList, void action(void*));

void reverse(tList);

void printList(tList, void print(void*));
void freeList(tList, void free(void*));

#endif
