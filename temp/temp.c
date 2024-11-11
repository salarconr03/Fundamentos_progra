#include <stdio.h>
#include <string.h>

int main(){
    float temperaturas[7][3];
    float promedio = 0;
    char hora[6];
    char dia[10];
    float temp = 0;
    float pro_semana = 0;

    for(int i = 0; i < 7; i++){
        i == 0 ? strcpy(dia, "Lunes") : dia;
        i == 1 ? strcpy(dia, "Martes") : dia;
        i == 2 ? strcpy(dia, "Miercoles") : dia;
        i == 3 ? strcpy(dia, "Jueves") : dia;
        i == 4 ? strcpy(dia, "Viernes") : dia;
        i == 5 ? strcpy(dia, "Sabado") : dia;
        i == 6 ? strcpy(dia, "Domingo") : dia;

        for(int j = 0; j < 3; j++){
            j == 0 ? strcpy(hora, "manana") : hora;
            j == 1 ? strcpy(hora, "tarde") : hora;
            j == 2 ? strcpy(hora, "noche") : hora;

            printf("\nIngrese la temepratura de la %s del %s:", hora, dia);
            scanf("%f", &temp);

            temperaturas[i][j] = temp;

            promedio += temperaturas[i][j];
            pro_semana += temperaturas[i][j];
        }

        promedio /= 3;

        printf("El promedio de temperatura del %s es de %.2fC", dia, promedio);

        promedio = 0;
    }
    
    pro_semana /= 21;
    printf("\nEl promedio de temperatura de la semana es de %.2f ", pro_semana);
    
    return 0;
}