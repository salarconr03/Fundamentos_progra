#include <stdio.h>

int main(){
    int cal[6];
    int *apun = cal;
    int pro = 0;

    for (int i = 0; i < 6; i++){
        printf("Ingrese la calificacion %d: ", i + 1);
        scanf("%d", apun);
        apun ++;
    }

    apun = cal;

    for (int i = 0; i < 6; i++){
        pro += *apun;
        apun++;
    }
    pro /= 6;

    printf("El promedio de las calificaciones es de: %d", pro);
    
    return 0;
}