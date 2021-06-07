#include <stdio.h>
#include <stdlib.h>


//3.1

void square(int n){
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            putchar('#');
        }
        printf("\n");
    }
    
}

//3.2


void square2(int n){
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (((i + j) % 2) == 0)
            {
                putchar('#');
            }else{
                putchar('_');
            }
            
        }
        printf("\n");
    }
}


void vertical(int n){
    int i, j;
    int colunas = n-1;
    for (i = 1; i < 2*n; i++)
    {
        for (j = 1; j <= colunas; j++)
        {
            putchar('#');
        }
        if (i < n)
        {
            colunas++;
        }else{
            colunas--;
        }
    printf("\n");   
    }
}


void horizontal (int n){
    int i, j;
    int espacos_inicial = n-1;
    int n_chars = n;
    int n_card = 1;
    for (i = 0; i < n; i++){
        for (int espacos = espacos_inicial; espacos > 0; espacos--)
        {
            putchar(' '); 
        }
        for (j = 1; j <= n_card ; j++)
        {
            putchar('#');
        }
    putchar('\n');
    espacos_inicial--;
    n_chars++;
    n_card = n_card + 2;
    }
}

void circulo(int n){
    for (int i = 0; i < 2*n+1; i++)
    {
        for (int j = 0; j < 2*n+1; j++)
        {
            if ((i-n)*(i-n)+(j-n)*(j-n) <= n*n)
            {
                putchar('#');
            }else{
                putchar(' ');
            }
            
        }
        putchar('\n');
    }
    
}

void interior(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n-1 || j == 0 || j == n-1)
            {
                putchar('#');
            }
            else{
                putchar(' ');
            }
        }
        putchar('\n');
    }
    
}



int main(){
    interior(5);
    return 0;
}