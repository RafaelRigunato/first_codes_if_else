#include<stdio.h>

int main() {
    
    char letra = 0;
    
    scanf("%c", &letra);
    
    if (letra >= 65 && letra <= 90) {
        printf("MAIUSCULA");    
    }
    
    else if (letra >= 97 && letra <= 122) {
        printf("MINUSCULA");
    }
    
    return 0;
    
}
