#include <stdio.h>
#include <string.h>

int main(){
    int inventario[3][3];
    int prod = 0;
    int total = 0;

    char categorias[3][15] = {"electronica", "ropa", "alimentos"};
    char lugares[3][15] = {"almacen", "piso de ventas", "en reparacion"};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Ingrese la cantidad de productos de %s en %s: ", categorias[i], lugares[j]);
            scanf("%d", &prod);

            inventario[i][j] = prod;
            total += inventario[i][j];
        }
    }

    printf("El total de productos en inventario es de %d \n", total);

    printf("%-15s %-15s %-15s %-15s \n", " ",lugares[0], lugares[1], lugares[2]);

    for(int i = 0; i < 3; i++){
        printf("%-15s", categorias[i]);
        for(int j = 0; j < 3; j++){
            printf(" %-15d", inventario[i][j]);
        }
        printf("\n");
    }

    return 0;
}