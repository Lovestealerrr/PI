#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

//1

void um(){
    int n;
    int max = 0;
    do
    {
        assert(scanf("%d", &n)==1);
        if (n > max)
        {
            max = n;
        }
    } while ( n!= 0);
    
    printf("%d", max);
}

//2
void dois(){
    int n;
    int contador = 0;
    double media;
    do
    {
        assert(scanf("%d", &n)==1);
        media += n;
        contador++;

    } while (n != 0);
    printf("%.lf", media/contador);
}

//3
int tres(){
    int n;
    int max = 0;
    do
    {
        assert(scanf("%d", &n)==1);
        if (n > max)
        {
            max = n;
        }   
    }while (n != 0);
    return max;
}

//4
int bitsUm(unsigned int n){
    int contador = 0;
    float k;
    while (n>0)
    {
        k = n%2;
        n /= 2;
        if (k==1)
        {
            contador++;
        }
        
    }
    return contador;
}

//5
int trailingZ(unsigned int n){
    int contador = 0;
    float k;
    while (n>0)
    {
        k = n%2;
        n /= 2;
        if (k==0)
        {
            contador++;
        }
        
    }
    return contador;
}

//6
int qDig (unsigned int n){
    int contador = 0;
    while (n>0)
    {
        n/=10;
        contador++;
    }
    return contador;
}

//7
char *strcat2 (char *s1, char *s2){
    int l = strlen(s1);
    int l2 =  strlen(s2);
    int i;
    for (i = 0; i <= l2; i++)
    {
        s1[l+i]=s2[i];
    }
    s1[l+i] = '\0';
    return s1;
}

//8
char *strcpy2 (char *dest, char *charsource){
    int l = strlen(charsource);
    for (int i = 0; i <=l; i++)
    {
        dest[i] = charsource[i];
    }
    dest[l] = '\0';
    return dest;
}

//9
int strcmp (char s1[], char s2[]){
    int r=1, i=0;
    while (s1 && s2)
    {
        if (s1[i]<s2[i])
        {
            r=-1;
        }else{
            r=0;
        }
        i++;
    }
    return r;
}

//10
char *strstr (char s1[], char s2[]){
    char* r=NULL;
    int j;
    for (int i = 0; i<strlen(s1); i++)
    {
        if (s1[i]==s2[i])
        {
            r[j]=s2[i];
            j++;
        }
        
    }
    return r;
}

//11

void strrev (char s[]){
    char* c;
    for (int i = strlen(s), int k=0 ; s[i]!='\0' ,k<strlen(s); i--, k++)
    {
        c[k]=s[i];
    }
    
}

//12
void strnoV (char s[]){
    for (int i = 0; s[i]!='\0'; i++)
    {
        if (s[i]='A' || s[i]='E' ||s[i]='I' ||s[i]='O' ||s[i]='U' ||s[i]='a' ||s[i]='e' ||s[i]='i' ||s[i]='o' ||s[i]='u' )
        {
            int j=0;
            j++;
            s[i]=s[i+1];
        }
        
    }
    s[j]='\0';
}

//13
void truncW (char t[], int n){
    char *s;
    int c=n;
    for (int i = 0; t[i]!='\0'; i++){
        if (t[i+1]!=' ' && c-- > 0)
        {
            s[i]=t[i];
        }else{
            s[i]=' ';
            c=n;
        }
        
    }
    
}

//14
char charMaisfreq (char s[]){
    int contador[128]={0};
    char r;
    for (int i = 0; s[i]!='\0'; i++)
    {
        contador[s[i]]++;
    }
    for (int i = 0; i < 128; i++)
    {
        if (contador[i]>contador[i+1])
        {
            r=i;
        }
        
    }
    return r;
}

//15
int iguaisConsecutivos (char s[]){
    int i, j, contaMax=0, contavezes=0;
    for (int i = 0; s[i]!='\0'; i++)
    {
        for (int j = i; s[j]!='\0'&&s[i]==s[j]; j++)
        {
            contavezes++;
            if (contaMax>contavezes)
            {
                contaMax=contavezes;
            }
            
        }
        
    }
    return contaMax;
}

//16
int difConsecutivos (char s[]){
    int i, j, contaMax=0, contavezes=0;
    for (i = 0; s[i]!='\0'; i++)
    {
        for (j = i; s[j]!='\0'&&s[i]!=s[j]; j++)
        {
            int contavezes=0;
            contavezes++;
            if (contaMax<contavezes)
            {
                contaMax=contavezes;
            }
            
        }
        
    }
    return contaMax;
}

int maiorPrefixo (char s1 [], char s2 []){
    int i, j, contaMax=0;
    for (i = 0; s1[i]!='\0'&&s2[i]!='\0'; i++)
    {
        if(s1[i]==s2[i]){
            int conta=0;
            conta++;
            if (contaMax<conta)
            {
                contaMax=conta;
            }
            
        }
    }
    return contaMax;
}

//18
int maiorSufixo (char s1 [], char s2 []){
    int i, j, contaMax=0;
    for (i = sizeof(s1)+sizeof(s2); i>0&&s1[i]!='\0'&&s2[i]!='\0'; i--)
    {
        if(s1[i]==s2[i]){
            int conta=0;
            conta++;
            if (contaMax<conta)
            {
                contaMax=conta;
            }
            
        }
    }
    return contaMax;
}

//19
int sufPref (char s1[], char s2[]){
    int j=0;
    for (int i = 0; s1[i]!='\0'; i++)
    {
        if(s1[i]==s2[j]){
            j++;
            else{
                j=0;
            }
        
    }
    return j;
}

//20

int contaPal (char s[]){
    int conta=0;
    for (int i = 0; s[i]; i++)
    {
        if ((s[i]!=' '&&s[i+1]==' ')||(s[i]!=' '&&s[i+1]=='\0'))
        {
            conta++;
        }
        
    }
    return conta;
}

//21
int isVowel(char c){
    int r=1;
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        r=0;
    }
    return r;
}

int contaVogais (char s[]){
    int conta=0;
    for (int i = 0; s[i]!='\0'; i++)
    {
        if (isVowel(s[i]))
        {
            conta++;
        }
        
    }
    return conta;
}

//22

int contida (char a[], char b[]){
    int r=0,j,i;
    for (i=0; a[i]!='\0'; i++)
    {
        for (j = 0; b[j]!='\0'; j++)
        {
            if (a[i]==b[j])
            {
                r++;
                break;
            }
        }
    }
    return (r-strlen(a));
}

//23

int palindorome (char s[]){
    int j,r=1;
    for (int i = 0,j=strlen(s); s[i]!='\0'; i++,j--)
    {
        while(s[i]==s[j]){
            r=0;
        }
    }
    return r;
}

//24

int remRep (char x[]){
    int i, j=0;
    for (i=0; x[i]!='\0'; i++)
    {
        if (x[i]!=x[i+1])
        {
            x[j++]=x[i];
        }
        
    }
    x[j]='\0';
    return j;
}

//25

int limpaEspacos (char t[]){
    int j=0;
    for (int i = 0; t[i]!='\0'; i++)
    {
        if (t[i]!=' '||t[i+1]!=' ')
        {
            t[j++]=t[i];
        }
        
    }
    t[j]='\0'
    return strlen(t);
}

//26

void insere (int v[], int N, int x){
    int j=0;
    for (int i = 0; i < N; i++)
    {
        if (x<=v[i])
        {
            for (j = N+1;j>i; j--)
            {
                v[j]=v[j-1];
            }
            v[i]=x;
        }
        
    }
    
}

//27

void merge (int r [], int a[], int b[], int na, int nb){
    int v=0,i=0,j=0;
    while (i<na && j<nb && v<na+nb)
    {
        if (a[i]>=b[j])
        {
            r[v++]=b[j++];
        }else{
            r[v++]=a[i++];
        }
        
    }
    while(i<na){
        r[v++]=a[i++];
    }
    while(j<nb){
        r[v++]=b[j++];
    }
    
}

//28

int crescente (int a[], int i, int j){
    int r=1;
    for (int m = i; m<j && r==1; m++)
    {
        if (a[m]>a[m+1])
        {
            r=0;
        }
        
    }
    return r;
}

//29

int retiraNeg (int v[], int N){
    int conta=0,j;
    for (int i = 0,j=0; i < N; i++)
    {
        if(v[i]>=0){
            v[j++]=v[i];
        }
    }
    return (N-j);
}

//30//corrigir!!

int menosFreq (int v[], int N){
    int conta=1, contaMax=1,numero;
    for (int i = 0; i < N; i++)
    {
        if (v[i]==v[i+1])
        {
            conta++;
        }else{
            conta=1;
        }
        if (conta>contaMax)
        {
            contaMax=conta;
            numero=v[i];
        }
    }
    return numero;
}

//31

int maisFreq (int v[], int N){
    int conta=1,contaMax=1,numero;
    for (int i = 0; i < N; i++)
    {
        if (v[i]==v[i+1]||v[i+1]!='\0')
        {
            conta++;
        }else{
            if (conta>contaMax)
            {
                contaMax=conta;
                numero=v[i];
            }
            conta=1;
        }
    }
    return numero;
}

//32

int maxCresc (int v[], int N){
    int conta=1,contaMax=0;
    for (int i = 0; i < N; i++)
    {
        if (v[i]<v[i+1])
        {
            conta++;
        }else{
            if (conta>contaMax)
            {
                contaMax=conta;
            }
            conta=1;
        }
    }
    return contaMax;
}

//33//i nao anda pa frente?

int elimRep (int v[], int n){
    int conta=0, j=0;
    for (int i = 0; i < n; i++)
    {
        j=i+1;
        while (j<n)
        {
            if (v[i]==v[j])
            {
            for (int k=j; k<n; k++)
            {
                v[k]=v[k+1];
            }
            conta++;
            }
            else{
                j++;
            }
        
        }
        
        
    }
    return conta;
}

//34

int elimRepOrd (int v[], int n){
    int conta=0;
    for (int i = 0; i < n; i++)
    {
        if (v[i]==v[i+1])
        {
            conta++;
            for (int j = i; j < n; j++)
            {
                v[j]=v[j+1];
            }
            
        }
        
    }
    return (conta-n);
}

//35&&36

int comunsOrd (int a[], int na, int b[], int nb){
    int i,j,conta=0;
    for ( i = 0; i < na; i++)
    {
        for ( j = 0; j < nb; j++)
        {
            if (a[i]==b[j])
            {
                conta++;
            }
            
        }
        
    }
    return conta;
}

//37

int minInd (int v[], int n){
    int numero=0;
    for (int i = 0; i < n; i++)
    {
        if (v[i]<numero)
        {
            numero=i;
        }
        
    }
    return numero;
}

//38

void somasAc (int v[], int Ac [], int N){
    Ac[0]=0;
    for (int i = 0; i < N; i++)
    {
        Ac[i]+=v[i];
    }
    
}

//39

int triSup (int N, float m [N][N]){
    int r=1;
    for (int i = 0; i < N; i++)
    {
        int cont=i;
        for (int j = 0; j < N && cont!=0; j++,cont--)
        {
            if(m[i][j]!=0)r=0;
        }
        
    }
    return r;
}

//40

void transposta (int N, float m [N][N]){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            float temp=m[i][j];
            v[i][j]=v[j][i];
            v[j][i]=temp;
        }
        
    }
    
}

//41

void addTo (int N, int M, int a [N][M], int b[N][M]){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            a[i][j]+=b[i][j];
        }
        
    }
    
}

//42



int main(){
    int s[11]={1, 2, 2, 3, 3, 3, 4, 4, 5, 5};
    //char str1[20] = "aabbbccaabbbbccc";
    //char str2[20] = "bracara augusta"
    printf("%d", elimRepOrd(s,11));
    return 0;
}