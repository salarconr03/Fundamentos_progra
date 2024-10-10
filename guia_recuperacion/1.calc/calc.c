#include <stdio.h>

int main(){
    float num_1 = 0;
    float num_2 = 0;
    float resultado = 0;
    int operacion = 0;

    printf("Ingrese dos numeros: \n");
    scanf("%f %f", &num_1, &num_2);

    printf("Seleccione una de las siguientes operaciones: \n 1.Suma \n 2.Resta \n 3.Multiplicacion \n 4.Division \n");
    scanf("%d", &operacion);

    switch (operacion){
        case 1:
            resultado = num_1 + num_2;
            printf("El resultado de la operacion es: %.1f", resultado);
            break;
        case 2:
            resultado = num_1 - num_2;
            printf("El resultado de la operacion es: %.1f", resultado);
            break;
        case 3:
            resultado = num_1 * num_2;
            printf("El resultado de la operacion es: %.1f", resultado);
            break;
        case 4:
            if(num_2 != 0){
                resultado = num_1 / num_2;
                printf("El resultado de la operacion es: %.1f", resultado);
            }else{
                printf("No se puede dividir entre 0");
            }
            break;
        default:
            printf("Por favor escoja una de las opciones proporcionadas.");
            break;
    }

    return 0;
}