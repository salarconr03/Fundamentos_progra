#include <stdio.h>

int main(){
    int anio = 0;

    printf("Ingrese un anio: ");
    scanf("%d", &anio);

    if(anio >= 0){
        if((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)){
            printf("Es anio bisiesto");
        }else{
            printf("No es anio bisiesto");
        }
    }else{
        printf("Por favor ingrese un anio valido");
    }

    return 0;
}