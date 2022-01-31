#include <stdio.h>

int main() {
    
    int numero_1 = 0;
    int numero_2 = 0;
    int numero_3 = 0;
    int menor = 0;
    
    scanf("%d", &numero_1);
    scanf("%d", &numero_2);
    scanf("%d", &numero_3);
    
    if (numero_1 < numero_2) {
        if (numero_1 < numero_3)
            menor = numero_1;
        else
            menor = numero_3;
    }
    
    else {
        if (numero_2 < numero_3)
            menor = numero_2;
        
        else
            menor = numero_3;
        
    }
    
    printf("%d", menor);
    
    
    return 0;
}
