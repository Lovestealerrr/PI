#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

//2
void swapM(int *x, int *y){
    int k;
    k = x;
    x = y;
    y = k;
}

//3
void swap(int v[], int i, int j){
    int k = v[i];
    v[i] = v[j];
    v[j] = k;
}

void swap2 (int v[], int i, int j){

  swapM(v+i,v+j); // &v[i] -> &(*(v+i))

}

//4
int soma(int v[], int N){
    int somatorio = 0;
    for (int i = 0; i < N;somatorio += v[i],  i++)
    {
        ;
    }
    return somatorio;
}

int soma2(int v[], int N){
    int soma=0, i;
    while (N)
    {
        soma += v[--N];
    }
    return soma;
}

//5
void inverteArray1(int v[], int N){
    for (int i = 0; i < N; i++, N--)
    {
        swap(v, i, N-1);
    }
    
}

void inverteArray2(int v[], int N){
    for (int i = 0; i < N; i++, N--)
    {
        swapM(&v[i], &v[N-1]);
    }
    
}

//6
int maximum (int v[], int N, int *m){
    int r = 1;
    if(N>0){
        *m = v[0];
        for (int i = 0; i < N; i++)
        {
            if (v[i] > *m)
            {
                *m = v[i];
            }
            
        }
        r = 0;
    }else{
        return r;
    }
}

//7
void quadrados (int q[], int N){
    for (int i = 0; i < N; i++)
    {
        q[i] = i*i;
    }
    
}

void quadrados2(int q[], int N){
    int i, imp = 1;
    if (N>0)
    {
        q[0]=0;
        for (int i = 1; i < N; i++, imp+=2)
        {
            q[i]=q[i-1] + imp;
        }
        
    }
    
}

//8
void pascal (int v[], int N){
    int c = 1;
    v[0] = c;
    for (int i = 1; i <= N; i++)
    {
        c = c * (N-i) / i;
        v[i] = c;
    }
    
}


int main(){
    int v[5];
    pascal(v, 5);
    /*
    int q[20], z;
    z = quadrados(q, 20);
    printf("%d", z);
    */
    return 0;
}