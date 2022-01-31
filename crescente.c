#include <stdio.h>

int main() {
    
    int numero_1 = 0;
    int numero_2 = 0;
    int numero_3 = 0;
    
    scanf("%d %d %d", &numero_1, &numero_2, &numero_3);

    if (numero_1 <= numero_2 && numero_2 <= numero_3)
        {
            printf("%d %d %d", numero_1, numero_2, numero_3);
        }
        
    else if (numero_1 <= numero_3 && numero_3 <= numero_2)
        {
            printf("%d %d %d", numero_1, numero_3, numero_2);
        }
        
    else if (numero_2 <= numero_1 && numero_1 <= numero_3)
        {
            printf("%d %d %d", numero_2, numero_1, numero_3);
        }
        
    else if (numero_2 <= numero_3 && numero_3 <= numero_1)
        {
            printf("%d %d %d", numero_2, numero_3, numero_1);
        }
    
    else if (numero_3 <= numero_1 && numero_1 <= numero_2)
        {
            printf("%d %d %d", numero_3, numero_1, numero_2);
        }
    
    else if (numero_3 <= numero_2 && numero_2 <= numero_1)
        {
            printf("%d %d %d", numero_3, numero_2, numero_1);
        }
    
    
    return 0;
}
