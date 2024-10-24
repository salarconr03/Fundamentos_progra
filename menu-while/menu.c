#include <stdio.h>

int main(){
    int par = 0;
    int inpar = 1;
    int suma = 0;
    int menu = 0;
    int seleccion = 0;

    while (menu == 0){
        printf("Seleccione una de las siguientes opciones: \n1.Imprimir los numeros pares (0-100) \n2. Imprimir los numeros impares (0-100) \n3.Suma acumulativa (0-100) \n4.Salir del menu \n");
        scanf("%d", &seleccion);

        switch (seleccion){
            case 1:
                while (par <= 100){
                    printf("%d\n", par);
                    par += 2;
                }
                par = 0;
                break;
            case 2:
                while (inpar < 100){
                    printf("%d\n", inpar);
                    inpar += 2;
                }
                inpar = 1;
                break;
            case 3:
                while (par < 100){
                    par++;
                    suma += par;
                    printf("%d \n", suma);
                }
                par = 0;
                suma = 0;
                break;
            case 4:
                menu++;
                break;
            default:
                printf("Por favor escoja una de las opciones proporcionadas.\n");
                break;
        }
    }
    

    return 0;
}