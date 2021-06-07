#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
//1
void somatorio(int n, int m){
    int r = 0;
    for (int i = 1; i <= n; i++)
    {
        r= m+r;
    }
    printf("%d", r);
}
//2
float somatorio2(int n, float m, int *count){
    float r = 0;
    *count = 0;
    do
    {
        if (n % 2 == 1)
        {
            r += m;
        }
        n /= 2;
        m *= 2;
        (*count)++;
    }while (n>=1);
    return r;
}
//3
int mdc1_2(int a, int b){
    int menor, r = 1;
    if (a > b)
    {
        menor = b;
    }else{
        menor = a;
    }while (menor > 0)
    {
        if (a%menor == 1 && b%menor == 1)
        {
            r = menor;
        }
        menor--;
    }
    
    return r;
}




//3

int mdc1(int a, int b){
    int r;
    if (a > b)
    {
        mdc1(b, a);
    }else{
        do
        {
            r = b%a;
            if (r == 0)
            {
                r = a;
                break;
            }else{
                b /= r;
            }
        } while (r > 0);
    }
    printf("%d", r);
}

//4
int mdc2(int a, int b){
    while(a&&b)
    {
        if (a>b)
        {
            a -= b;
        }else{
            b -= a;
        }
        
    }
    return (a+b);
}

//5
int mdc3(int a, int b, int *count){
    int *count = 0;
    int r;
    do
    {
        if (a >= b)
        {
            r = a%b;
        }else{
            mdc3(b,a,*count);
        }
        if (r == 0)
        {
            r = b;
            break;
        }
        a = b;
        b = r;
        (*count)++;
    } while (r > 0);
    return r;
}

//6a

int fib1 (int n){
    int r;
        if (n < 2)
        {
            r = 1;
        }else{
            r = fib1(n-1)+ fib(n-2);
        }
    return r;
}



int main(){
    int c = 0;
    int r = mdc3(12, 9, &c);
    printf("%d", r);
    return 0;
}

