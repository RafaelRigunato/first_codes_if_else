#include<stdio.h>

int main() {
    
    int mes = 0;
    
    scanf("%d", &mes);
    if (mes == 1) {
        printf("Janeiro");
        } else if (mes == 2) {
            printf("Fevereiro");
            } else if (mes == 3) {
                printf("Março");
                } else if (mes == 4) {
                    printf("Abril");
                    } else if (mes == 5) {
                        printf("Maio");
                        } else if (mes == 6) {
                            printf("Junho");
                            } else if (mes == 7) {
                                printf("Julho");
                                } else if (mes == 8) {
                                    printf("Agosto");
                                    } else if (mes == 9) {
                                        printf("Setembro");
                                        } else if (mes == 10) {
                                            printf("Outubro");
                                            } else if (mes == 11) {
                                                printf("Novembro");
                                                } else if (mes == 12) {
                                                    printf("Dezembro");
                                                    } else if (mes <= 0) {
                                                        printf("invalido");
                                                        } else if (mes >= 13) {
                                                            printf("Invalido");
                                                        }
                                                        
                                                        
                                                            
                                                
    
    
return 0;    
} 
