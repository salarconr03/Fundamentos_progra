#include <stdio.h>

int main(){
    float metros = 0;
    int conversion = 0;

    printf("Ingrese una cantidad en metros: ");
    scanf("%f", &metros);

    printf("Escoja a que convertir la cantidad: \n1.Centimetros \n2.Milimetros \n3.Kilometros\n");
    scanf("%d", &conversion);

    switch (conversion){
        case 1:
            metros *= 100;
            printf("El resultado de la conversion es: %.2f", metros);
            break;
        case 2:
            metros *= 1000;
            printf("El resultado de la conversion es: %.2f", metros);
            break;
        case 3:
            metros /= 1000;
            printf("El resultado de la conversion es: %.2f", metros);
            break;
        default:
            printf("Por favor escoja una de las opciones proporcionadas");
            break;
    }

    return 0;
}