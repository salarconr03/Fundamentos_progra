#include <stdio.h>

#define MAYORIA_EDAD 18

int main(){
    int edad = 0;

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    if(edad > 0){
        if (edad >= MAYORIA_EDAD){
        printf("Eres mayor de edad");
        }else{
            printf("Eres menor de edad");
        }
    }else{
        printf("Por favor ingrese una edad valida");
    }

    return 0;
}