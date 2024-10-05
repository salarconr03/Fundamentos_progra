#include <stdio.h>
#include <string.h>
int main(){
    char nombre_cliente[50] = "";
    int antiguedad = 0;
    int asistencias = 0;
    int pagos = 0;
    int actividad_fisica = 0;
    int pago_adelantado = 0;
    char desc_estatus[50] = "";
    int estatus = 0;
    int elegible = 0;
    char beneficios[100] = "";
    int descuento = 0;

    printf("Ingrese su nombre: ");
    scanf("%s", nombre_cliente);

    printf("Ingrese el numero de anos de su membresia: ");
    scanf("%d", &antiguedad);

    printf("Ingrese el numero de asistencias mensuales: ");
    scanf("%d", &asistencias);

    printf("Ingrese el numero de pagos mensuales en el ultimo ano: ");
    scanf("%d", &pagos);

    printf("Ha aumentado su actividad fisica recientemente? (1 para si, 0 para no)");
    scanf("%d", &actividad_fisica);

    printf("Ha solicitado un descuento por pago adelantado? (1para si, 0 para no)");
    scanf("%d", &pago_adelantado);

    actividad_fisica ? asistencias++ : asistencias;
    (pagos != 12) ? pagos-- : pagos;
    pago_adelantado ? pago_adelantado-- : pago_adelantado++;

    (antiguedad >= 3) ? elegible++ : elegible;
    (asistencias >= 12) ? elegible++ : elegible;
    (pagos >= 10) ? elegible++ : elegible;
    printf("%d",elegible);

    (elegible >= 2) ? estatus++ : estatus;
    (elegible >=2) ? descuento = 15 : descuento;
    (elegible == 1) ? descuento = 5 : descuento;

    (estatus) ? strcpy(desc_estatus, "Elegible")   : strcpy(desc_estatus, "No elegible");
    (estatus) ? strcpy(beneficios, "Acceso ilimitado a clases especiales, descuentos en productos y asesoramiento personalizado") : strcpy(beneficios, "No tiene beneficios");

    printf("Hola %s\n", nombre_cliente);
    printf("Estatus de membresia: %s\n", desc_estatus);
    printf("Beneficios asignados: %s\n", beneficios);
    printf("Descuento aplicado en pagos mensuales: %d\n", descuento);
    printf("Numero de asistencias: %d\n", asistencias);
    printf("Numero de pagos puntuales: %d\n", pagos);

    return 0;
}