#include<stdio.h>

int main () {
    
    float massa;
    float altura;
    float imc;
    
    scanf("%f %f", &massa,&altura);
    
    imc = massa / (altura * altura);
    
    if (imc <= 18.5) {
        printf("magreza");
        } else if (imc >= 18.5 && imc < 25) {
         printf("Saudavel");   
        } else if (imc >= 25 && imc < 30) {
            printf("Sobrepeso");
        } else if (imc >=30 && imc < 35) {
            printf("Obesidade grau I ");
        } else if (imc >= 35 && imc < 40) {
            printf("Obesidade Grau II");
        } else if (imc >= 40) {
            printf("Obesidade Grau III");
        }
    

    
    return 0;
}
