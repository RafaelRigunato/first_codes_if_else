#include<stdio.h>

int main(){
    
    int numero = 0;
    
    scanf("%d", &numero);
    
    if (numero % 2 == 1) {
        printf("IMPAR");
    }
    
    else {
        printf("PAR");
    }
    
    return 0;
}
