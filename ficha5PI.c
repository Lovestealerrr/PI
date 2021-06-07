#include <stdio.h>

typedef struct aluno {
    int numero;
    char nome[100];
    int miniT [6];
    float teste;
} Aluno;

//////////////////////////////////
int nota (Aluno a){
    //notas dos miniteste * 0.3 -> >=8
    //nota do teste * 0.7 -> >=8
    float notaF;
    float miniTeste = 0;
    for (int i = 0; i < 6; i++)
    {
        miniTeste += a.miniT[i];
    }
    miniTeste =(miniTeste*20)/12;
    if (miniTeste >= 8 && a.teste >= 8)
    {
        notaF=round(miniTeste*0.3 + a.teste*0.7);
    }
    return notaF;

void ordenaPorNum (Aluno t [], int N){
    int min;
    Aluno tmp;
    for (int i = 0; i < N; i++)
    {
        min = i;
        for (int j = i; j < N; j++)
        {
            if (t[j].numero < t[min].numero)
            {
                min = j;
            }
            
        }
        tmp = t[i];
        t[i] = t[min];
        t[min] = tmp;
        
    }
    
}
int procuraNum (int num, Aluno t[], int N){
    int r=-1;
    for (int i = 0; i < N && t[i].numero < num; i++)
    {
        if (num == t[i].numero)
        {
            r=i;
        }
        
        
    }
    return r;
}

void swapindice(char *s, int j, int i){
    int k=s+i;
    s+i=s+j;
    s+j=k;
}

void criaIndPorNum (Aluno t [], int N, int ind[]){
    int tmp, min;

    for (int i = 0; i < N; i++)
    {
        ind[i]=i;
    }
    
    for (int i = 0; i < N; i++)
    {
        min = i;
        for (int j = i+1; j < N; j++)
        {
            if (t[j].numero < t[min].numero)
            {
                min = j;
            }
            
        }
        swapindice(ind, i, min);
    }
}
int bubbleInd(Aluno t [], int N, int ind[]){

  int i, maxIndTroca=0;

  int tmp;

   

  for(i=1; i<N; i++)

    if(t[ind[i]].numero < t[ind[i-1]].numero){

      tmp = ind[i-1];

      ind[i-1] = ind[i];

      ind[i] = tmp;

      maxIndTroca = i;

    }

   

  return maxIndTroca;

}


void criaIndPorNum (Aluno t [], int N, int ind[]){

  int i;

  for(i=0; i<N; i++)

    ind[i] = i;

     

  while(N = bubbleInd(t,N,ind));

   

}

void imprimeTurmaInd (int ind[], Aluno t[], int N){
    for (int i = 0; i < N; i++)
    {
        imprimeAluno(t+ind[i]);
    }
    
}
/////////////////////////////////

void dumpV (int v[], int N){
    int i;
    for (i=0; i<N; i++) printf ("%d ", v[i]);
}
void imprimeAluno (Aluno *a){
    int i;
    printf ("%-5d %s (%d", a->numero, a->nome, a->miniT[0]);
    for(i=1; i<6; i++) printf (", %d", a->miniT[i]);
    printf (") %5.2f %d\n", a->teste, nota(*a));
}

int procuraNumInd (int num, int ind[], Aluno t[], int N){
    int r=-1;
    for (int i = 0; i < N && t[ind[i]]<num; i++)
    {
        if (i<N && num==t[ind[i]].numero)
        {
            r=ind[i];
        }
        
    }
    
    return r;
}

void criaIndPorNome (Aluno t [], int N, int ind[]){
    
}


int main() {
    Aluno Turma1 [7] = {{4444, "André", {2,1,0,2,2,2}, 10.5}
                       ,{3333, "Paulo", {0,0,2,2,2,1},  8.7}
                       ,{8888, "Carla", {2,1,2,1,0,1}, 14.5}
                       ,{2222, "Joana", {2,0,2,1,0,2},  3.5}
                       ,{7777, "Maria", {2,2,2,2,2,1},  5.5}
                       ,{6666, "Bruna", {2,2,2,1,0,0}, 12.5}
                       ,{5555, "Diogo", {2,2,1,1,1,0},  8.5}
                       } ;
    int indNome [7], indNum [7];
    int i;
    
    printf ("\n-------------- Testes --------------\n");
    
    // ordenaPorNum (Turma1, 7);

    // printf ("procura 5555: %d \n", procuraNum (5555, Turma1, 7));
    // printf ("procura 9999:%d \n", procuraNum (9999, Turma1, 7));

    for (i=0; i<7; imprimeAluno (Turma1 + i++));
    
    // criaIndPorNum (Turma1, 7, indNum);
    
    // criaIndPorNome (Turma1, 7, indNome);

    // imprimeTurmaInd (indNum, Turma1, 7);
    // imprimeTurmaInd (indNome, Turma1, 7);

    // printf ("procura 5555:%d \n",  procuraNumInd (5555, indNum, Turma1, 7));
    // printf ("procura 9999:%d \n",  procuraNumInd (9999, indNum, Turma1, 7));

    printf ("\n---------- Fim dos Testes ----------\n");
    
    return 0;
}