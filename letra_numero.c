#include<stdio.h>

    int main() {
        
        char numero_letra = 0;
        
        scanf("%c", &numero_letra);
        
        if (numero_letra >= 48 && numero_letra <= 57) {
            printf("NUMERO");
        } else if (numero_letra >= 65 && numero_letra <= 90) {
            printf("LETRA");
        } else if (numero_letra >= 97 && numero_letra <= 122)
            printf("LETRA");
        
    
    return 0;
    
    }
