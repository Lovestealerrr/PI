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
    (*r)=k[0];
    for (int i = 1; i<length(a)+length(b); i++, r=&((*r)->prox))
    {
        *r=k[i];
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

LInt parteAmeio (LInt *l){
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

int removeAll (LInt *l, int x){
    int conta=0;
    LInt ant=*l;
    while (*l && (*l)!=x)
    {
        ant=*l;
        l=&((*l)->prox);
    }
    conta++;
    if (*l)
    {
        *l=(*l)->prox;
        ant->prox=*l;
    }
    
    return conta;
}

//outra tentativa

int removeAll (LInt *l, int x){
    int conta=0;
    LInt ant;
    while (*l)
    {
        if ((*l)->valor==x)
        {
            ant=*l;
            (*l)=(*l)->prox;
            free(ant);
            conta++;
        }
        l=&((*l)->prox);
    }
    return conta;
}

//11

int removeDups (LInt *l){
    int conta=0;
    LInt ant=*l;
    LInt delete;
    if (ant==NULL) return;

    while (*l)
    {
        ant=*l;
        l=&((*l)->prox);
    }while (*l)
    {
        if ((*l)->valor==ant->valor)
        {
            delete=*l;
            (*l)=(*l)->prox;
            free(delete);
            conta++;
        }else{
            l=&((*l)->prox);
        }
    }
    l=&ant;
    l=&((*l)->prox);
    return conta;
}

//12

int removeMaiorL (LInt *l){
    LInt ant;
    int res;
    while (*l)
    {
        ant=*l;
        l=&((*l)->prox);
        if (ant->valor>(*l)->valor)
        {
            res=ant->valor;
        }
        
    }
    
    return res;
}

//13

void init (LInt *l){
    LInt delete;
    while (*l)
    {
        if ((*l)->prox==NULL)
        {
            delete=*l;
            free delete;
            ant->prox==NULL;
        }
        l=&((*l)->prox);
    }
}

//14

void appendL (LInt *l, int x){
    LInt delete;
    delete->valor=x;
    while (*l)
    {
        if ((*l)->prox==NULL)
        {
            (*l)->prox=delete;
            delete->prox=NULL;
        }
        l=&((*l)->prox);
    }
}

//15

void concatL (LInt *a, LInt b){
    while ((*a)->prox)
    {
        a=&((*a)->prox);
    }
    *a=b;
}

//16

LInt cloneL (LInt l){
    LInt nova;
    LInt *sitio=&nova;
    while (l)
    {
        *sitio=malloc(sizeof(struct lligada));
        (*sitio)->valor=l->valor;
        l=l->prox;
        sitio=&((*sitio)->prox);
    }
    *sitio=NULL;
    return nova;
}


//17

LInt cloneRev (LInt l){
    LInt nova=cloneL(l);
    nova=reverseL(l);
    return nova;
}

//18

int maximo (LInt l){
    int r;
    LInt ant;
    while (l)
    {
        ant=l;
        l=l->prox;
        if (ant->valor>l->valor)
        {
            r=ant->valor;
        }
    }
    return r;
}

//19

int take (int n, LInt *l){
    int r = (n>length(&l)) ? n : length(&l);
    LInt ant;
    while (*l&&n>0)
    {
        n--;
        l=&((*l)->prox);
    }while (*l)
    {
        ant=*l;
        l=&((*l)->prox);
        free(ant);
    }
    return r;
}

//20

int drop (int n, LInt *l){
    int r=(n>length(&l)) ? length(&l) : n;
    LInt ant;
    while (*l&&n>0)
    {
        n--;
        ant=*l:
        l=&((*l)->prox);
        free(ant);
    }
    return r;   
}

//21

LInt Nforward (LInt l, int N){
    while (l && N>0)
    {
        N--;
        l=l->prox;
    }
    
    return l;
}

//22

int listToArray (LInt l, int v[], int N){
    for (int i = 0; i < N; i++,l=l->prox)
    {
        v[i]=l->valor;
    }
    return i);
}

//23

LInt arrayToList (int v[], int N){
    LInt res=malloc(sizeof(struct lligada));
    LInt *sitio=&res;
    for (int i = 0; i < N; i++)
    {
        (*sitio)->valor=v[i];
        sitio=&((*sitio)->prox);
    }
    *sitio=NULL;
    return res;
}

//24

LInt somasAcL (LInt l){
    LInt nova=malloc(sizeof(struct lligada));
    LInt *sitio=&nova;
    int acc=0;
    while (l)
    {
        acc+=l->valor;
        l=l->prox;
        (*sitio)->valor=acc;
        sitio=&((*sitio)->prox);
    }
    *sitio=NULL;
    return nova;
}

//25

void remreps (LInt l){
    LInt ant, delete;
    LInt *sitio=&l;
    while (*sitio)
    {
        ant=*sitio;
        sitio=&((*sitio)->prox);
        if (ant->valor==(*sitio)->valor)
        {
            delete = *sitio;
            ant->prox=(*sitio)->prox;
            free(delete);
        }
        
    }
    *sitio=NULL;
}

//26

LInt rotateL (LInt l){
    if (l==NULL||l->prox==NULL) return l;
    LInt *sitio=&l;
    LInt first = *sitio;
    while (*sitio)
    {
        sitio=&((*sitio)->prox);
    }
    *sitio=first;
    (*sitio)->prox=NULL;
    return l;
}

//27

LInt parte (LInt l){
    
}
