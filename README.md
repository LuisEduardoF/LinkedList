# Generic Linked List
## Methods:
1) **inicializeList**: Inicialize a linked list;
    - *Args*: Nothing
    - *Returns*: A new empty linked list
2) **lenght**: Return the value of the lenght of a linked list;
    - *Args*: A inicialized linked list
    - *Returns*: A integer representing the lenght of the linked list
3) **push**: Adds a element in the begin of a linked list;
    - *Args*: A item and a list
    - *Returns*: Nothing
4) **queue**: Adds a element in the end of a linked list;
    - *Args*: A item and a list
    - *Returns*: Nothing
5) **extend**: Adds all the elements of an list to the end of other list.
    - *Args*: A list source, target and a function to copy the itens of the Source list
    - *Returns*: Nothing
6) **pop**: Remove the element at a especified position of the list;
    - *Args*: A integer position and list
    - *Returns*: The element removed ( if does'nt find return NULL )    
7) **erase**: Remove the first element that matches and return it ( if does'nt find return NULL );
    - *Args*: A item, a list and a function to compare the itens in the list
    - *Returns*: The element removed ( if does'nt find return NULL )
8) **search**: Search the first element that matches and return it ( if does'nt find return NULL )
    - *Args*: A item, a list and a function to compare the itens in the list
    - *Returns*: The element searched ( if does'nt find return NULL )
9) **interactList**: Do a function to all the element of a linked list;
    - *Args*: A list and a function
    - *Returns*: Nothing
10) **reverse**: Reverse a linked list in-place;
    - *Args*: A list
    - *Returns*: Nothing
11) **printList**: Print a linked list;
    - *Args*: A list and a function to print the elements in the list
    - *Returns*: Nothing
12) **freeList**: Free the memory that the linked list;
    - *Args*: A list and a function to free the elements in the list
    - *Returns*: Nothing