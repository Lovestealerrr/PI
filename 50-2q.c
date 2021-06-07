#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>


typedef struct lligada {
int valor;
struct lligada *prox;
} *LInt;


//1

int length (LInt l){
    int r=0;
    if (l!=NULL)
    {
        r++;
        l=l->prox;
    }
    return r;
}

//2

void freeL (LInt l){
    LInt temp=l;
    if (l)
    {
        l=l->prox;
        free(temp);
        temp=l;
    }
    
}

//3

void imprimeL (LInt l){
    if (l)
    {
        printf("%d\n",l->valor);
        l=l->prox;
    }
}

//4

LInt reverseL (LInt l){
    int len =length(l);
    int array[len];
    for (int i = 0; i < len; l=l->prox,i++)
    {
        array[i]=l->valor;
    }for (int i = len-1; i > 0; i--)
    {
        l=array[i];
        l=l->prox;
    }
    return l;
}

//5

void insertOrd (LInt *l, int x){
    LInt temp=*l;
    while (l)
    {
        (*l)=(*l)->prox;
        if (x>=(*l)->valor){
            (*l)->prox=x;
            (*l)->prox=(*l)->prox->prox;
            
        }
    }
    
    
    
}