#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

#define MAX 10

//1

struct staticStack {
int sp;
int values [Max];
} STACK, *SStack;

//a

void SinitStack (SStack s){
    s->sp=0;
}

//b

int SisEmpty (SStack s){
    return (s->sp==NULL);
}

//c

int Spush (SStack s, int x){
    int r=1;
    if(s->sp<MAX){
        r=0;
        s->values[s->sp++]=x;
    }
    return r;
}

//d

int Spop (SStack s, int *x){
    int r=1;
    if(s->sp>0){
        r=0;
        *x=s->values[s->sp--];
    }
    return r;
}

//e

int Stop (SStack s, int *x){
    int r=1;
    if (s->sp>0)
    {
        r=0;
        *x=s->values[s->sp-1];
    }
    return r;
}

//2

struct staticQueue {
int front;
int length;
int values [Max];
} QUEUE, *SQueue;

//a

void SinitQueue (SQueue q){
    q->front=0;
    q->length=0;
}

//b

int SisEmptyQ (SQueue q){
    return (q->front==NULL);
}

//c

int Senqueue (SQueue q, int x){
    int r=1;
    if (q->length<MAX)
    {
        r=0;
        q->values[(q->front+(q->length++))%MAX]=x;
    }
    return r;
}

//d

int Sdequeue (SQueue q, int *x){
    int r=1;
    if (q->length>0)
    {
        r=0;
        *x=q->values[q->front];
        q->front=(q->front+1)%MAX;
        q->length--;
    }
    return r;
}

//e

int Sfront (SQueue q, int *x){
    int r=1;
    if (q->length>0)
    {
        r=0;
        *x=q->values[q->front];
    }
    return r;
}

//3

typedef struct dinStack {
int size; // guarda o tamanho do array values
int sp;
int *values;
} *DStack;

typedef struct dinQueue {
int size; // guarda o tamanho do array values
int front;
int length;
int *values;
} *DQueue;

//a1

void SinitStack1 (SStack s){
    s->sp=NULL;
    s->size=MAX;
    s->values=malloc(sizeof(int)*s->size);
}

//b1

int SisEmpty1 (SStack s){
    return((s->size)=0);
}

//c1

int Spush (SStack s, int x){
    int r=1;
    if (s->sp!=NULL)
    {
        /* code */
    }
    
}