#include <stdio.h>

int main(){
    float peso = 0;
    float altura = 0;
    float imc = 0;

    printf("Ingrese su peso: ");
    scanf("%f", &peso);
    printf("Ingrese su altura: ");
    scanf("%f", &altura);

    if(peso > 0 && altura > 0){
        imc = peso / (altura * altura);

        if(imc < 18.49){
            printf("Su IMC es de %.2f y usted esta bajo de peso", imc);
        }else if(imc >= 18.5 && imc <= 24.99){
            printf("Su IMC es de %.2f y usted esta dentro del peso normal", imc);
        }else if(imc >= 25 && imc <= 29.99){
            printf("Su IMC es de %.2f y usted tiene sobrepeso", imc);
        }else{
            printf("Su IMC es de %.2f y usted tiene obesidad", imc);
        }
    }else{
        printf("Por favor ingrese un peso y altura validos.");
    }
}