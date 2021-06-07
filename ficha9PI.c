#include <stdlib.h>
#include <stdio.h>


typedef struct nodo {
int valor;
struct nodo *esq, *dir;
} * ABin;

ABin newABin (int r, ABin e, ABin d) {
    ABin a = malloc (sizeof(struct nodo));
    if (a!=NULL) {
        a->valor = r; a->esq = e; a->dir = d;
    }
return a;
}

//1

//a
int altura (ABin a){
    int r=1;
    while (a.esq)
    {
        r++;
    }
    while (a.dir)
    {
        r++;
    }
    return r;
}

//b

int nFolhas (ABin a){
    int r=0;
    while (a.esq)
    {
        r++;
    }
    while (a.dir)
    {
        r++;
    }
    return r;
}

ABin maisEsquerda (ABin a){
    
}