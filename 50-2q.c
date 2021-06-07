#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>


typedef struct lligada {
int valor;
struct lligada *prox;
} *LInt;

LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}


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
    LInt temp=malloc(sizeof(struct lligada));
    temp->valor=x;
    while (*l && (*l)->valor < x)
    {
        (*l)=(*l)->prox;
    }
    nova->prox=(*l)
    *l=nova;
}


//6

int removeOneOrd (LInt *l, int x){
    LInt ant = *l;

    while(*l && (*l)->valor != x){
        ant = *l;
        l = &(*l)->prox;
    }
    
    if( *l ){
       *l = (*l)->prox;
        ant->prox = *l;
        return 0;
    }

    return 1;
}

//7

void ordenaArray(int k[], int v[], int s[], int N, int M){
    int l=N+M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (v[i]<s[j])
            {
                k[l++]=v[i];
            }   
        }   
    }
}

void merge (LInt *r, LInt a, LInt b){
    int v[length(a)];
    int s[length(b)];
    for (int i = 0; a!=NULL; i++,a=a->prox)
    {
        v[i]=a->valor;
    }
    for (int i = 0; b!=NULL; i++, b=b->prox)
    {
        s[i]=b->valor;
    }
    int k[length(a)+length(b)]=ordenaArray(k,v,s,length(a),length(b));
    (*r)->valor=k[0];
    for (int i = 1; i<length(a)+length(b); i++)
    {
        (*r)->prox=k[i];
    }
}

//2a tentativa

void merge (LInt *r, LInt a, LInt b){
    while (a && b)
    {
        if (a->valor< b->valor)
        {
            *r-valor=a->valor;
            a=a->prox;
            r=&((*r)->prox);
        }else{
            *r->valor=b->valor;
            b=b->prox;
            r=&((*r)->prox);
        }
    }
    while(a!=NULL){
        *r = a;
        *r = (*r)->prox;
    }
    while(b!=NULL){
        *r = b;
        *r = (*r)->prox;
    }
}

//8

void splitQS (LInt l, int x, LInt *mx, LInt *Mx){
    while (l)
    {
        if (l->valor<x)
        {
            *mx=l;
            mx=&((*mx)->prox);
        }else{
            *Mx=l;
            Mx=&((*Mx)->prox);
        }
        l=l->prox;
    }
    *mx=NULL;
    *Mx=NULL;
}

//9

LLig parteAmeio (LLig *l){
    int k=length(l)/2;
    LInt aux=malloc(sizeof(struct lligada));
    while (l && k>0)
    {
        k--;
        aux->valor=(*l)->valor;
        aux=aux->prox;
        l=&((*l)->prox);
    }
    return aux;
}

//10

