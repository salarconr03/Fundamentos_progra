#include <stdio.h>

int main(){
    char frase[100];
    int len = 0;
    int A = 0;
    int E = 0;
    int I = 0;
    int O = 0;
    int U = 0;
    int contador = 0;
    int pal = 0;

    printf("Ingrese una frase: ");
    fgets(frase, 100, stdin);

    for(int i = 0; frase[i] != '\0'; i++){
        if(frase[i] >= 65 && frase[i] <= 90){
            frase[i] += 32;
        }else if(frase[i] >= 97 && frase[i] <= 122){
            frase[i] = frase[i];
        }else{
            for(int j = i; j != ' '; j++){
                frase[j] = frase[j+1];
            }
            i = i - 1;
        }
    }


    while (frase[contador] != '\0'){
        len++;
        contador++;
    }


    for(int i = 0; i < len; i++){
        if (frase[i] == frase[len - (i+1)]){
            pal = pal;
        }else{
            pal++;
            break;
        }   
    }

    for(int i = 0; i < len; i++){
        if(frase[i] == 'a'){
            A++;
        }else if(frase[i] == 'e'){
            E++;
        }else if(frase[i] == 'i'){
            I++;
        }else if(frase[i] == 'o'){
            O++;
        }else if(frase[i] == 'u'){
            U++;
        }
    }

    if (pal == 0){
        printf("La palabra es un palindromo.\n");
    }else{
        printf("La palabra no es un palindromo\n");
    }

    printf(" El numero de letras A es de: %d\n El numero de letras E es de: %d\n El numero de letras I es de: %d\n El numero de letras O es de: %d\n El numero de letras U es de: %d\n", A, E, I, O, U);

    return 0;
}