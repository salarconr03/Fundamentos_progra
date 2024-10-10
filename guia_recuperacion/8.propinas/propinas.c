#include <stdio.h>

int main(){
    float cuenta = 0;
    int servicio = 0;
    float propina = 0;

    printf("Ingrese el total de su cuenta: ");
    scanf("%f", &cuenta);
    printf("Como le parecio el servicio? \n 1.Excelente \n2.Bueno \n3.Regular");
    scanf("%d", &servicio);

    switch(servicio){
        case 1:
            propina = cuenta * 0.2;
            printf("De acuerdo a su evaluacion del servicio le recomendamos dar de propina $%.2f", propina);
            break;
        case 2:
            propina = cuenta * 0.15;
            printf("De acuerdo a su evaluacion del servicio le recomendamos dar de propina $%.2f", propina);
            break;
        case 3:
            propina = cuenta * 0.10;
            printf("De acuerdo a su evaluacion del servicio le recomendamos dar de propina $%.2f", propina);
            break;
        default:
            printf("Por favor seleccione una de las opciones proporcionadas");
            break;
    }

    return 0;
}