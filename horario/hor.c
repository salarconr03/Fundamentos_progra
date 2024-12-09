#include <stdio.h>
#include <string.h>

int main(){
    char materias[5][5][5];
    char dias[5][10] = {"lunes", "martes", "miercoles", "jueves", "viernes"};
    char horas[5][10] = {"8: 00", "9: 00", "10: 00", "11: 00", "12: 00"};
    char mat[5];

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("Ingrese la materia del bloque del %s a las %s: ", dias[i], horas[j]);
            scanf("%s", mat);
            strcpy(materias[j][i], mat);
        }
        
    }
    
    printf("%-15s %-15s %-15s %-15s %-15s %-15s \n", " ", dias[0], dias[1], dias[2], dias[3], dias[4]);

    for(int i = 0; i < 5; i++){
        printf("%-15s", horas[i]);
        for(int j = 0; j < 5; j++){
            printf(" %-15s", materias[i][j]);
        }
        printf("\n");
    }

    return 0;
}