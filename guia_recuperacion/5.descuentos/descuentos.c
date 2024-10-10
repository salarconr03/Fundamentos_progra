#include <stdio.h>

int main(){
    float precio = 0;
    float descuento = 0;
    int categoria = 0;

    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);
    printf("Escoja a que categoria pertenece: \n1.Ropa \n2.Electronica \n3.Electrodomesticos \n4.Muebles");
    scanf("%d", &categoria);

    switch(categoria){
        case 1:
            descuento = precio * 0.95;
            printf("Se le aplicara descuento del 5%%\n");
            printf("El precio del producto despues de aplicar el descuento es: $%.2f", descuento);
            break;
        case 2:
            descuento = precio * 0.9;
            printf("Se le aplicara descuento del 10%%\n");
            printf("El precio del producto despues de aplicar el descuento es: $%.2f", descuento);
            break;
        case 3:
            descuento = precio * 0.7;
            printf("Se le aplicara descuento del 30%%\n");
            printf("El precio del producto despues de aplicar el descuento es: $%.2f", descuento);
            break;
        case 4:
            descuento = precio * 0.85;
            printf("Se le aplicara descuento del 15%%\n");
            printf("El precio del producto despues de aplicar el descuento es: $%.2f", descuento);
            break;
        default:
            printf("Por favor seleccione una de las opciones proporcionadas");
            break;
    }

    return 0;
}