#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

typedef struct node{
    void* info;
    struct node *prox;
}*tNode;
tNode inicializaNode(void* info){
    tNode new = malloc(sizeof(struct node));
    new->info = info;
    new->prox = NULL;
    return new;
}
struct list{
    tNode fst, end;
    int lenght;
};
int isEmptyList(tList l){
    return l->fst == NULL;
}
int ExistList(tList l){
    return l != NULL;
}
tList inicializeList(){
    tList new = malloc(sizeof(struct list));
    new->fst = new->end = NULL;
    new->lenght = 0;
    return new;
}
int lenght(tList L){
    return L->lenght;
}
void* erase(void* info, tList L, int cmp(void*, void*)){
     if(ExistList(L)){
        if(isEmptyList(L)){
            return NULL;
        }
        else{
            tNode p = L->fst, ant = NULL;
            void* aux;
            for(p = L->fst; p != NULL; p = p->prox){
                if(cmp(p->info, info)){
                    break;
                }
                ant = p;
            }
            if(p == NULL){
                return NULL;
            }
            if(p == L->fst && p == L->end){
                L->fst = L->end = NULL;
            }
            else if(p == L->fst){
                L->fst = L->fst->prox;
            }
            else if(p == L->end){
                L->end = ant;
                L->end->prox = NULL;
            }
            else{
                ant->prox = p->prox;
            }
            L->lenght--;
            aux = p->info;
            free(p);
            return aux;
        }
    }
}
void* search(void* info, tList L, int cmp(void*, void*)){
    if(ExistList(L)){
        if(isEmptyList(L)){
            return NULL;
        }
        else{
            tNode p = L->fst;
            for(p = L->fst; p != NULL; p = p->prox){
                if(cmp(p->info, info)){
                    return p->info;
                }
            }
            return NULL;
        }
    }
}
void appendElement(void* info, tList L){
    if(ExistList(L)){
        tNode c = inicializaNode(info);
        if(isEmptyList(L)){
            L->fst = L->end = c;
        }
        else{
            L->end->prox = c;
            L->end = c;
        }
        L->lenght++;
    }
}
void extend(tList p, tList s, void* cpy(void*)){
    if(ExistList(p) && ExistList(s)){
        if(isEmptyList(s)){
            return;
        }
        else{
            for(tNode l = s->fst; l != NULL; l = l->prox){
                appendElement(cpy(l->info), p);
            }
        }
    }
}
void interactList(tList l, void action(void*)){
    if(ExistList(l)){
        if(isEmptyList(l)){
            return;
        }
        else{
            for(tNode p = l->fst; p != NULL; p = p->prox){
                action(p->info);
            }
        }
    }
}
void reverse(tList l){
    if(ExistList(l)){
        if(isEmptyList(l)){
            return;
        }
        else{
            tNode ant = NULL, next, aux;
            for(tNode p = l->fst; p != NULL; p = next){
                next = p->prox;
                p->prox = ant;
                ant = p;
            }
            aux = l->fst;
            l->fst = l->end;
            l->end = aux;
        }
    }
}
void printList(tList L, void print(void*)){
    for(tNode p = L->fst; p != NULL; p = p->prox){
        print(p->info);
    }
    printf("List Lenght: %d\n", L->lenght);
}
void freeList(tList L, void f(void*)){
    if(ExistList(L)){
        if(!isEmptyList(L)){
            tNode aux = NULL;
            for(tNode p = L->fst; p != NULL; p = aux){
                aux = p->prox;
                f(p->info);
                free(p);
            }
        }
        free(L);
    }
}