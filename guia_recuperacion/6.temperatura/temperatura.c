#include <stdio.h>

int main(){
    int unidad = 0;
    float temperatura = 0;
    float conversion = 0;

    printf("Que unidad desea convertir \n1.Grados Celsius \n2.Grados Fahrenheit");
    scanf("%d", &unidad);
    printf("Ingrese el valor de la temperatura: ");
    scanf("%f", &temperatura);

    if(unidad == 1){
        conversion = (temperatura * (9/5) + 32);
        printf("El resultado de la conversion es : %.2f ° Fahrenheit", conversion);
    }else if(unidad == 2){
        conversion = (temperatura-32)*(5/9);
        printf("El resultado de la conversion es : %.2f ° Celsius", conversion);
    }else{
        printf("Por favor escoja una de las opciones proporcionadas");
    }

    return 0;
}