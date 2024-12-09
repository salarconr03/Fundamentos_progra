#include <stdio.h>

//Declaracion de funciones
void menu(int *numeros);
int * insertar(int *numeros, int args);
int suma(int *numeros);
int resta();
int multiplicacion(int * array_num);
int division();

//variables globales
int salir = 0;
int cantidad = 0;
int args = 0;

//funcion principal
int main(){
    int numeros[100];
    menu(numeros);
}

//funcion menu
void menu(int *numeros){
    int opc = 0;
    int res_suma = 0;
    int res_resta = 0;

    while (salir == 0){
        printf("Escoja una de las siguientes opciones. \n1.Insertar valores. \n2.Suma. \n3.Resta. \n4.Multiplicacion. \n5.Division. \n6.Salir.\n");   
    
        scanf("%d", &opc);

        switch (opc){
        case 1:
            insertar(numeros, args);
            break;
        case 2:
            res_suma = suma(numeros);
            printf("El resultado de la suma es de: %d \n", res_suma);
            break;
        case 3:
            res_resta = resta();
            printf("El resultado de la resta es de: %d \n", res_resta);
            break;
        case 4:
            multiplicacion(numeros);
            break;
        case 5:
            division();
            break;
        case 6:
            salir++;
            break;
        default:
            printf("Por favor seleccione una de las opciones proporcionadas.");
            break;
        }
    }
}

//funcion insertar
int * insertar(int *numeros, int args){
    static int *pun;
    
    if(args == 0){
        int num = 0;

        printf("Ingrese la cantidad de numeros que desea insertar: ");
        scanf("%d", &cantidad);

        for (int i = 0; i < cantidad; i++){
            printf("Ingrese el numero %d: ", i + 1);
            scanf("%d", &num);

            numeros[i] = num;
        }
        pun = numeros;
    }

    return pun;

}

//funcion suma
int suma(int * array_num){
    int resultado = 0;

    for (int i = 0; i < cantidad; i++){
        resultado += array_num[i];
    }
    
    return resultado;
}

//funcion resta
int resta(){
    int resultado = 0;
    if (cantidad != 0){
        int *pun;
        
        args++;
        pun = insertar(pun, args);

        resultado = *pun;

        for (int i = 1; i < cantidad; i++) {
            resultado -= *(pun + i);
        }

        args--;

    }
    return resultado;
}

//funcion multiplicacion
int multiplicacion(int * array_num){
    int resultado = 0;
    (cantidad > 0 ) ? resultado = 1 : resultado;

    for (int i = 0; i < cantidad; i++){
        resultado *= array_num[i];
    }
    
    printf("El resultado de la multiplicacion es de: %d \n", resultado);
}

//funcion division
int division(){
    int resultado = 0;
    if (cantidad != 0){
        int *pun;
    
        args++;
        pun = insertar(pun, args);

        resultado = *pun;

        for (int i = 1; i < cantidad; i++) {
            resultado /= *(pun + i);
        }

        args--;
    }

    printf("El resultado de la division es de: %d \n", resultado);
}