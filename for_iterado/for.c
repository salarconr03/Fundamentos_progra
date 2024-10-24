#include <stdio.h>

int main(){
    int n = 0;
    int m = 0;

    printf("Ingrese 2 numeros: ");
    scanf("%d %d", &n, &m);
    //1
    printf("1.\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf(" *");
        }
        printf("\n");
    }

    printf("2.\n");
    //2
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf(" *");
        }
        printf("\n");
    }

    printf("3.\n");
    //3
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j < n-(i+1)){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }

    printf("4.\n");
    //4
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i; j++){
            printf("* ");
        }
        printf("\n");
    }

    printf("5.\n");
    //5

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j < n-(n-i)){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }

    printf("6.\n");
    //6
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j < n-(i+1)){
                printf(" ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            if(j < n-(n-i)){
                printf(" ");
            }else{
                printf(" *");
            }
        }
        printf("\n");
    }
    printf("7.\n");
    //7

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j < n-(n-i)){
                printf(" ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }

    printf("8.\n");
    //8
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j < n-(i+1)){
                printf(" ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }

    printf("9.\n");
    //9
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf(" *");
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}