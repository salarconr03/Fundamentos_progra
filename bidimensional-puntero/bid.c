#include <stdio.h>

int main(){
    int array[3][3];
    int *pun = &array[0][0];
    int diagonal = 0;

    //asignar valores al array
    for (int i = 0; i < 3* 3; i++) {
        *pun = i + 1;
        pun++;
    }

    //imprimir el array
    pun = &array[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            printf("%d ", *pun);
            pun++;
        }
        printf("\n");
    }

    printf("\n");

    //modificar valores del array e imprimirlos
    pun = &array[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            *pun += 1;
            printf("%d ", *pun);
            pun++;
        }
        printf("\n");
    }

    //suma diagonal
    pun = &array[0][0];

    for (int i = 0; i < 3; i++) {
        diagonal += *(pun + i * 3 + i);
    }

    printf("El resultado de la suma diagonal es: %d", diagonal);

    printf("\n");

    //intercambiar valores de la primera y ultima fila
    for (int i = 0; i < 3; i++) {
        int temp = *pun;
        *pun = *(pun + 6);
        *(pun + 6) = temp;
        pun++;
    }

    //imprimir el array
    pun = &array[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            printf("%d ", *pun);
            pun++;
        }
        printf("\n");
    }
    
    return 0;
}