#include <stdio.h>
#include <stdlib.h>

#define FALSE (1==0)
#define TRUE  (1==1)

int Verificar_primos (int n){
    int i = 2;

    if(n< 1){
        return FALSE;
    }
    else if(n==2){
        return TRUE;
    }
    else{
        for( i; i<n;i+=1){
            if (n % i == 0){
                return FALSE;
            }
        }
        return TRUE;
    }
}
int main()
{
    printf("Hello world!\n");

    int cont = 0;
    int numero_inicial = 5000000;
    while ( cont < 20 ){
        if (Verificar_primos(numero_inicial) == TRUE){
            printf("PRIMO : %d",numero_inicial);
            numero_inicial = numero_inicial + 1;
            cont = cont + 1;
        }
        else{
            numero_inicial = numero_inicial + 1;
        }
    }

    return 0;
}
