#include <stdlib.h>
#include <stdio.h>

typedef struct nodo {
    int valor;
    struct nodo *esq, *dir;
} * ABin;

//1
//a

ABin removeMenor (ABin *a){
    ABin r = NULL;
    while((*a)->esq){
        a=&((*a)->esq);
        r=*a;
        *a=*a->dir;
    }
    return r;
}

//b

void removeRaiz (ABin *a){
    ABin r = a;
    if ((*a)->dir)
    {
        aux=removeMenor(&((*a)->dir));
        aux->esq=(*a)->esq;
        aux->dir=(*a)->dir;
    }else aux=(*a)->esq;
    free(*a);
    *a=aux;
}

//c

int removeElem (ABin *a, int x){
    int r=1;
    ABin aux;
    if (x<((*a)->valor))
    {
        while(((*a)->esq)){
            a=&((*a)->esq);
            if ((*a)->valor==x)
            {
                r=0;
                aux=removeRaiz(a);
            }
        }
    }
    if (x>((*a)->valor))
    {
        while(((*a)->dir)){
            a=&((*a)->dir);
            if ((*a)->valor==x)
            {
                r=0;
                aux=removeRaiz(a);
            }
        }
    }else aux=removeRaiz(a);
    
    return r;
}

int removeElem2 (ABin *a, int x){
    int res=-1;
    while ((*a)&& (*a)->valor!=x)
    {
        if ((*a)->valor>x)
        {
            a=&((*a)->valor);
        }else{
            a=&((*a)->valor);
        }
        if (*a)
        {
            removeRaiz(a);
            res=0;
        }
        
    }
    return res;
}

//2

void rodadireita(ABin *a){
    ABin aux=*a;
    *a=(*a)->esq;
    aux->esq=(*a)->dir;
    (*a)->dir=aux;
}

void rodaesquerda(ABin *a){
    ABin aux=*a;
    *a=(*a)->dir;
    aux->dir=(*a)->esq;
    (*a)->esq=aux;
}

//d

void promoveMenor (ABin *a){
    if ((*a) && ((*a)->esq))
    {
        promoveMenor(&((*a)->esq));
        rodadireita(a);
    }
    
}

//e

void promoveMenor (ABin *a){
    if ((*a) && ((*a)->esq))
    {
        promoveMenor(&((*a)->dir));
        rodaesquerda(a);
    }
    
}

//3
//g
int constroiEspinha (ABin *a){
    ABin aux=(*a)->dir;
    if ((*a))
    {
        /* code */
    }
    
}



int main(){
    return 0;
}