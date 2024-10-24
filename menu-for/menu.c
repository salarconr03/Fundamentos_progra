#include <stdio.h>
#include <string.h>

int main(){
    int seleccion = 0;
    char oracion[100];
    int menu = 0;
    int contador = 0;
    int len = 0;
    int i = 0;

    while (menu == 0){
        printf("Selecccione una de las siguientes opciones \n1.Contar las palabras en una oracion. \n2.Mostrar cada palabra de la oracion en una linea separada. \n3.Contar la cantidad de vocales en un texto. \n4.Salir\n");
        scanf("%d", &seleccion);

        switch (seleccion){
            case 1:
                printf("Ingrese una oracion: \n");
                fflush(stdin);
                fgets(oracion, 100, stdin);
                contador++;
                
                while (oracion[i] != '\0'){
                    len++;
                    i++;
                }

                for(int j = 0; j < len; j++){
                    if (oracion[j] == ' '){
                        contador++;
                    }
                }

                printf("El numero de palabras en la oracion es de : %d\n", contador);
                memset(oracion, 0, 100);
                contador = 0;
                break;
            case 2:
                printf("Ingrese una oracion: \n");
                fflush(stdin);
                fgets(oracion, 100, stdin);
                
                while (oracion[i] != '\0'){
                    len++;
                    i++;
                }

                for(int j = 0; j < len; j++){
                    if (oracion[j] == ' '){
                        printf("\n");
                    }else{
                        printf("%c", oracion[j]);
                    }
                }
                memset(oracion, 0, 100);
                break;
            case 3:
                printf("Ingrese una oracion: \n");
                fflush(stdin);
                fgets(oracion, 100, stdin);
                
                while (oracion[i] != '\0'){
                    len++;
                    i++;
                }

                for(int j = 0; j < len; j++){
                    if (oracion[j] == 'a' || oracion[j] == 'A' || oracion[j] == 'e' || oracion[j] == 'E' || oracion[j] == 'i' || oracion[j] == 'I' || oracion[j] == 'o' || oracion[j] == 'O' || oracion[j] == 'u' || oracion[j] == 'U'){
                        contador++;
                    }
                }

                printf("El numero de vocales en la oracion es de : %d\n", contador);
                memset(oracion, 0, 100);
                contador = 0;
                break;
            case 4:
                printf("Hasta luego");
                menu++;
                break;
            default:
                printf("Por favor seleccione una de las opciones proporcionadas.");
                break;
        }
    }
    
    return 0;
}