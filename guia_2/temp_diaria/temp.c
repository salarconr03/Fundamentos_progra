#include <stdio.h>
#include <string.h>

//variables globales
float temperaturas[7];
float onda_calor = 0;
const char* dias[] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};

//declaracion de funciones
void menu();
void temp(float *temp);
float promedio();
int *maximo(float *temp);
void tendencia(float *temp);

//fumcion main
int main(){
    menu();
}

//funcion menu
void menu(){
    int salir = 0;
    float pro = 0;
    int *max;

    while (salir == 0){
        int opc = 0;
        printf("Seleccione una de las siguientes opciones \n 1.Registrar temeperaturas diarias \n 2.Calcular el promedio semanal \n 3.Identficar el dia con la temperatura mas alta y mas baja \n 4.Mostrar una tendencia \n 5.Salir \n");
        scanf("%d", &opc);

        switch (opc){
            case 1:
                temp(temperaturas);
                break;
            case 2:
                pro = promedio();
                printf("El promedio de temperatura de la semana es de: %.2f \n", pro);
                if(pro > onda_calor){
                    printf("Hay alerta de onda de calor");
                }
                break;
            case 3:
                max = maximo(temperaturas);
                printf("El dia con la temperatura mas alta es; %s \n", dias[max[0]]);
                printf("El dia con la temperatura mas baja es: %s \n", dias[max[1]]);
                break;
            case 4:
                tendencia(temperaturas);
                break;
            case 5:
                salir++;
                break;
            default:
                printf("Por favor seleccione una de las opciones proporcionadas \n");
                break;
        }
    }
}

//funcion para el registro de temperaturas
void temp(float *temp){
    float temperatura = 0;
    
    for (int i = 0; i < 7; i++){

        printf("Ingrese la temperatura del %s: ", dias[i]);
        scanf("%f", &temperatura);

        *(temp + i) = temperatura;
    }

    printf("Ingrese el limite de temperatura para determinar si hay onda de calor: ");
    scanf("%f", &onda_calor);
    
}

//funcion promedio
float promedio(){
    float promedio = 0;
    for (int i = 0; i < 7; i++){
        promedio += temperaturas[i];
    }

    promedio /= 7;

    return promedio;
    
}

//funcion maximo
int *maximo(float *temp){
    float mayor = temp[0];
    float menor =  temp[0];
    int pos_mayor = 0;
    int pos_menor = 0;
    static int temps[2];

    for(int i = 1; i < 7; i++){
        if(temp[i] > mayor){
            mayor = temp[i];
            pos_mayor = i;
        }else if(temp[i] < menor){
            menor = temp[i];
            pos_menor = i;
        }
    }
    temps[0] = pos_mayor;
    temps[1] = pos_menor;

    int *pun = temps;
    return pun;
}

//funcion tendencia
void tendencia(float *temp){
    int aumento = 0;
    int disminucion = 0; 
    int max_aumento = 0;
    int max_disminucion = 0;

    for (int i = 1; i < 7; i++) {
        if (temp[i] > temp[i - 1]) {
            aumento++;
            if (aumento > max_aumento) {
                max_aumento = aumento;
            }
            disminucion = 0;
        } else if (temp[i] < temp[i - 1]) {
            disminucion++;
            if (disminucion > max_disminucion) {
                max_disminucion = disminucion;
            }
            aumento = 0;
        }else{
            aumento = 0;
            disminucion = 0;
        }
    }

    printf("Maximo aumento de temperatura consecutivo: %d dias\n", max_aumento);
    printf("Maxima disminución de temperatura consecutiva: %d dias\n", max_disminucion);
}