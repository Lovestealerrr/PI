#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//aux

void swapstuff(int v[],int x, int y){
    int z = v[x];
    v[x] = v[y];
    v[y] = z;
}

//1

//1.1

int contaVogais (char *s){
    int contador = 0;
    int ln = strlen(s);
    for (int i = 0; i < ln; i++)
    {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            contador++;
        }
        
    }
    return contador;
}

//1.2//função que conta quantas letras tem repetidas

int retiraVogaisRep (char *s){
    //int ln = strlen(s);
    int contador = 0;
    for (int i = 0; s[i]!='\0'; i++)
    {
        if (s[i]==s[i+1])
        {
            for (int i = i+1; i < ln; i++)
            {
                s[i]=s[i+1];
            }
            
            contador++;
        }
        
    }
    return contador;
}

//1.2
int retiraVogaisRep2 (char *s){
    int ln = strlen(s);
    char *c;
    for (int i = 0; s[i]!='\0'; i++)
    {
        if (s[i]==s[i+1])
        {
            for (int j = i+1; j < ln; j++)
            {
                s[j]=s[j+1];
            }
            
            c[i]=s[i+1];
        }
        
    }
    return contaVogais(c);
}

int retiraVogaisRep (char *s){

  char aux[strlen(s)];
  int r, w;
  for(r=0, w=0; s[r]!='\0'; r++)

    // Não quero escrever no aux: s[r]==s[r+1] && isVogal(s[r])

    // Quero escrever quando !(s[r]==s[r+1] && isVogal(s[r])) <==> s[r]!=s[r+1] || !(isVogal(s[r]))

    // !(a && b) <==> !a || !b

    if(s[r]!=s[r+1] || !(isVogal(s[r])))

        s[w++] = s[r];
        s[w]='\0';

        strcpy(s,aux);
    return (r-w);

}


//1.3

int duplicaVogais (char *s){
    int ln = strlen(s);
    for(int i = 0; i<ln; i++){
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='O')
        {
            s[i+1]=s[i];
            for (int j = i+2; j < ln; j++)
            {
                s[j]=s[j-1];
            }
            
        }
    }

    return contaVogais(s);
}

int duplicaVogais2 (char *s){
  int vog = contaVogais(s);
  int r = strlen(s)-1;
  int w = r + vog;
  s[w+1] = '\0';
    while(r>=0){
      s[w--]=s[r--];
      if(isVogal(s[r])){
        s[w--]=s[r];
        }
    }
    return vog;
}


int duplicavogais3(char *s){
    int vogais=contaVogais(s);
    char v[strlen(s)+vogais];
    int k;
    for (int i = 0,k=0; s[i]!='\0'; i++)
    {
        if (isVogal(s[i]))
        {
            v[k]=v[k++]=s[i];
        }
        
    }
    
    return vogais;
}

//2

//2.1

int ordenado (int v[], int N){
    int r;
    for (int i = 0; i < N && r==1; i++)
    {
        if (v[i]>v[i+1])
        {
            r = 0;
        }
        
    }
    return r;
}

//2.2

void merge(int a[], int na, int b[], int nb, int r[]){
    for (int i = 0, int j = 0; i < na && j < nb ; i++, j++)
    {
        if (a[i]<b[j])
        {
            r[i]=a[i];
        }else{
            r[i]=b[j];
        }
        
    }
    
}
//2.3

int partition (int v[], int N, int x){
    for (int i = 0; i < N; i++)
    {
        if (v[i]>v[x])
        {
            swapstuff(v,i,x);
        }
        
    }
    
}


int main(){
    char *s= "ola tudo bem";
    int z;
    z = contaVogais(s);
    printf("%d", z);
    return 0;
}