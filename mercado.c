#include<stdio.h> 

int main() {
    
    int codigo = 0;
    int quantidade = 0;
    float valor_total_compra = 0;
    
    scanf("%d %d", &codigo, &quantidade);
    
    if (codigo == 1) {
        valor_total_compra = 
            quantidade * 8.50;
    }
    if (codigo == 2) {
        valor_total_compra 
            = quantidade * 9;
        
    }
    
    if (codigo == 3) {
        valor_total_compra 
            = quantidade * 7.50;
    }
    
    if (codigo == 4) {
        valor_total_compra 
            = quantidade *11;
    }
    
    if (codigo == 5) {
        valor_total_compra 
            = quantidade *8.30;
    }
    printf("%.2f", valor_total_compra);
    
    return 0;
}
