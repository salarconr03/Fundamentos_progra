#include <stdio.h>

int main(){
    float peso = 0;
    int envio = 0;
    float costo = 0;

    printf("Ingrese el peso del paquete en kg: ");
    scanf("%f", &peso);
    printf("Seleccione el tipo de envio: \n1.Normal \n2.Expres \n3.Internacional");
    scanf("%d", &envio);

    if(peso > 0){
        switch (envio){
            case 1:
                costo = peso * 5;
                printf("El costo de envio es de $%.2f", costo);
                break;
            case 2:
                costo = peso * 10;
                printf("El costo de envio es de $%.2f", costo);
                break;
            case 3:
                costo = peso * 20;
                printf("El costo de envio es de $%.2f", costo);
                break;
            default:
                printf("Por favor escoja una de las opciones proporcionadas");
                break;
        }
    }else{
        printf("Por favor ingrese un peso valido");
    }

    return 0;
}